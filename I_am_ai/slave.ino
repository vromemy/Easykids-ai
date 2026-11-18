double wraps(double val) {
    while (val > 180) val -= 360;
    while (val < -180) val += 360;
    return val;
}

void turn(double relative) {
    double kp = 0.8; double kd = 1.5;

    double target = heading + relative;
    double prev_error = 0.0;
    if (target > 180) target -= 360;
    if (target < -180) target += 360; 
    heading = target;

    while (1) {
        double error = target - angleRead(YAW);
        error = wraps(error);

        double derivative = error - prev_error;
        double result = (error * kp) + (derivative * kd);
        prev_error = error;

        if (fabs(error) <= 0.5) {
            motorStop();
            break;
        } else if (fabs(error) <= 30.0) {
            double power = copysign(10, error);
            motorWrite(power, power, -power, -power);
        } else {
            motorWrite(result, result, -result, -result);
        }
    }
}

void straightUntil(int power, int* sen) {
    double kp = 1.8; double kd = 10.0;

    double prev_error = 0.0;

    while (1) {
        int sensor = map(adcRead(sen[0]), sen[1], sen[2], 0, 100);
        double error = heading - angleRead(YAW);
        error = wraps(error);

        double derivative = error - prev_error;
        double result = (error * kp) + (derivative * kd);
        prev_error = error;

        double left = power + result;
        double right = power - result;
        motorWrite(left, left, right, right);

        if (sensor >= 80) {
            motorStop();
            break;
        }
    }
}

void straight(int power, int timer) {
    double kp = 1.8; double kd = 10.0;

    unsigned long start = millis();
    double prev_error = 0.0;

    while (1) {
        double error = heading - angleRead(YAW);
        error = wraps(error);

        double derivative = error - prev_error;
        double result = (error * kp) + (derivative * kd);
        prev_error = error;

        double left = power + result;
        double right = power - result;
        motorWrite(left, left, right, right);

        if ((millis() - start) >= timer) {
            motorStop();
            break;
        }
    }
}

void setb(int power) {
    while (1) {
        int left_back = map(adcRead(rl[0]), rl[1], rl[2], 0, 100);
        int right_back = map(adcRead(rr[0]), rr[1], rr[2], 0, 100);

        if (left_back >= 80 && right_back >= 80) {
            motorStop();
            break;
        }
        if (right_back >= 80) {
            motorWrite(3, power);
            motorWrite(4, power);
        } else {
            motorWrite(3, -power);
            motorWrite(4, -power);
        }
        if (left_back >= 80) {
            motorWrite(1, power);
            motorWrite(2, power);
        } else {
            motorWrite(1, -power);
            motorWrite(2, -power);
        }
    }
    delay(100);
    heading = angleRead(YAW);
}

void setf(int power) {
    while (1) {
        int left_front = map(adcRead(fl[0]), fl[1], fl[2], 0, 100);
        int right_front = map(adcRead(fr[0]), fr[1], fr[2], 0, 100);

        if (left_front >= 80 && right_front >= 80) {
            motorStop();
            break;
        }
        if (left_front >= 80) {
            motorWrite(1, -power);
            motorWrite(2, -power);
        } else {
            motorWrite(1, power);
            motorWrite(2, power);
        }
        if (right_front >= 80) {
            motorWrite(3, -power);
            motorWrite(4, -power);
        } else {
            motorWrite(3, power);
            motorWrite(4, power);
        }
    }
    delay(100);
    heading = angleRead(YAW);
}

void wait() {
    motorStop();
    while (!switchRead(A) && !switchRead(B));
    delay(500);
}

int retrieveAprilTag() {
    delay(1000);
    return 0;
}

void blinkColor(int color) {
    delay(1000);
}
