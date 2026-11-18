void gotoAprilTag() {
    setb(20);
    straight(20, 100);
    straight(50, 400);
    straight(20, 100);

    setf(20);
    straight(20, 250);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    setf(20); // at 1st intersection
 
    straight(20, 100);
    straight(50, 400);
    straightUntil(20, fr);
    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 450);
    straight(20, 100);
    setf(20);
}

void gotoCollectZone() {
    straight(-20, 100);
    straight(-50, 350);
    straight(-20, 100);
    setb(20);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20); // at 1st intersection

    straight(20, 100);
    straight(50, 400);
    straight(20, 100);
    straightUntil(20, fl);
    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 350);
    straight(20, 100);
    setf(20); // at collect zone
}

void gotoHospital() {
    straight(-20, 100);
    straight(-50, 300);
    straight(-20, 100);
    setb(20);

    straight(-20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    straightUntil(20, fr);

    straight(20, 200);
    turn(-90);

    straight(-20, 100);
    straight(-50, 100);
    straight(-20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 875);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);
    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 800);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);
    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    straightUntil(20, fl);
    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 350);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);
    
    straight(20, 500);
}

void returnHospital() {
    setb(20);

    straight(-20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 350);
    straight(20, 100);
    straightUntil(20, fr);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);

    setf(20);
    straight(20, 200);
    turn(-90);

    straight(-20, 100);
    straight(-50, 100);
    straight(-20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    straightUntil(20, fl);

    straight(20, 200);
    turn(90);

    straight(-20, 100);
    straight(-50, 100);
    straight(-20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20); // at 1st intersection

    straight(20, 100);
    straight(50, 400);
    straight(20, 100);
    straightUntil(20, fl);
    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 350);
    straight(20, 100);
    setf(20); // at collect zone
}

void gotoShop() {
    straight(-20, 100);
    straight(-50, 300);
    straight(-20, 100);
    setb(20);

    straight(-20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    straightUntil(20, fr);

    straight(20, 200);
    turn(-90);

    straight(-20, 100);
    straight(-50, 100);
    straight(-20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 875);
    straight(20, 100);
    setf(20);

    straight(20, 200);

    turn(-90);
    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);

    straight(20, 500);
}

void returnShop() {
    straightUntil(-20, rl);

    straight(-20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 350);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    straightUntil(20, fl);

    straight(20, 200);
    turn(90);

    straight(-20, 100);
    straight(-50, 100);
    straight(-20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20); // at 1st intersection

    straight(20, 100);
    straight(50, 400);
    straight(20, 100);
    straightUntil(20, fl);
    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 350);
    straight(20, 100);
    setf(20); // at collect zone
}

void gotoCharging() {
    straight(-20, 100);
    straight(-50, 300);
    straight(-20, 100);
    setb(20);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    setf(20);

    straight(20, 250);
    turn(90);

    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 750);
    straight(20, 100);
    setf(20);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 500);
}

void returnCharging() {
    straightUntil(-20, rr);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 200);
    straight(20, 100);
    setf(20);

    straight(20, 100);
    straight(50, 950);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 150);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 800);
    straight(20, 100);
    straightUntil(20, fr);
    
    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);
}

void gotoSchool() {
    straight(-20, 100);
    straight(-50, 300);
    straight(-20, 100);
    setb(20);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    setf(20);

    straight(20, 250);
    turn(90);

    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 750);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(90);

    straight(20, 500);
}

void returnSchool() {
    setb(20);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-91);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 800);
    straight(20, 100);
    straightUntil(20, fr);
    
    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);
}

void gotoParkinglot() {
    setb(20);

    straight(-20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-91);

    straight(20, 100);
    straight(50, 850);
    straight(20, 100);
    setf(20);

    straight(20, 200);
    turn(-90);

    straight(20, 100);
    straight(50, 100);
    straight(20, 100);
    setb(20);

    straight(20, 100);
    straight(50, 300);
    straight(20, 100);
    straightUntil(20, fr);
    
    straight(20, 200);
    turn(90);

    straight(20, 100);
    straight(50, 400);
    straight(20, 100);
    setf(20);
}
