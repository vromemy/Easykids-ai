#include <PTBOTAtomVX.h>
#include <Adafruit_NeoPixel.h> 

#define RED 0
#define GREEN 1
#define YELLOW 2
#define BLUE 3

Adafruit_NeoPixel strip(12, 2, NEO_GRB + NEO_KHZ800);


int fl[3] = { 1, 264, 950 };
int fr[3] = { 3, 298, 955 };
int rr[3] = { 5, 325, 957 };
int rl[3] = { 7, 258, 935 };


double heading = 0.0;
int apriltag = 0;
int current = 0; 
int iteration = 0;
int aprilhash[4][4] = { // HOSPITAL, SHOP, CHARGING, SCHOOL
    { RED, YELLOW, GREEN, BLUE },
    { YELLOW, GREEN, BLUE, RED },
    { BLUE, RED, YELLOW, GREEN },
    { GREEN, BLUE, RED, YELLOW }
};



void drop() {
    delay(1000);
}

void setup() {
    Serial.begin(115200);
    initialize();
    //calibrateIMU();
    // lcdClear();

    servoWrite(0, 0); //gripper
    servoWrite(1, 90); //uparm
   

    strip.begin();           // INITIALIZE NeoPixel strip object
    strip.show();            // Turn OFF all pixels ASAP
    strip.setBrightness(50); // Set brightness (0 to 255)

}

void loop() {

    strip.show();   

    wait();
    setAngleOffset();
    heading = 0.0;

    gotoAprilTag();

    apriltag = retrieveAprilTag();

    gotoCollectZone();

    for (int i = 0; i < 0; i++) {
        
        blinkColor(aprilhash[apriltag][iteration++]);

        gotoHospital();

        drop();
        returnHospital();

        blinkColor(aprilhash[apriltag][iteration++]);

        gotoShop();
        drop();
        returnShop();

        blinkColor(aprilhash[apriltag][iteration++]);

        gotoCharging();
        drop();
        returnCharging();

        blinkColor(aprilhash[apriltag][iteration]);

        gotoSchool();
        drop();
        if (!i) returnSchool();
        else gotoParkinglot();

        iteration = 0;
    }
}