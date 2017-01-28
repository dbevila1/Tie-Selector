// Dan Bevilacqua, Michael Garlak, Nate Hahn
// Tie Selector
// Uses two TCS3200 Color Sensors, 360* Servo and Arduino Uno R3 v
// Kent FashionTech Hackathon
// 1/27/2017

#include <Servo.h>

Servo rackServo;

// ---------------------- SERVO PIN ---------------------------------
const int sPin = 13;

// ---------------------- SHIRT SENSOR PORTS ------------------------
const int ss0 = 3;
const int ss1 = 5;
const int ss2 = 6;
const int ss3 = 9;
const int sout = 10;

// --------------------- TIE SENSOR PORTS ------------------------
const int ts0 = 0;
const int ts1 = 1;
const int ts2 = 2;
const int ts3 = 4;
const int tout = 8;

// -----------------------TIE SELECTION VARIABLES--------------------
int cycleCount = 0;
bool foundTie = false;

// -------------------- COLOR VARIABLES -----------------------------
int dataR, dataG, dataB;
enum color {red, orange, yellow, green, blue, purple, black};

void setup() {
  // SHIRT SENSOR
  pinMode(ss0, OUTPUT);
  pinMode(ss1, OUTPUT);
  pinMode(ss2, OUTPUT);
  pinMode(ss3, OUTPUT);
  pinMode(sout, INPUT);
  digitalWrite(ss0, HIGH);
  digitalWrite(ss1, HIGH);

  // TIE SENSOR
  pinMode(ts0, OUTPUT);
  pinMode(ts1, OUTPUT);
  pinMode(ts2, OUTPUT);
  pinMode(ts3, OUTPUT);
  pinMode(tout, INPUT);
  digitalWrite(ts0, HIGH);
  digitalWrite(ts1, HIGH);

  // SERVO
  rackServo.attach(sPin);

  // SERIAL
  Serial.begin(9600);
}

void loop() {
  int shirtColor;
  while (true) {
    // SENSE SHIRT COLOR
    senseColor(ss2, ss3, sout);
    if (sen2Red()) {
      shirtColor = red;
      break;
    }
    if (sen2Orange()) {
      shirtColor = orange;
      break;
    }
    if (sen2Yellow()) {
      shirtColor = yellow;
      break;
    }
    if (sen2Green()) {
      shirtColor = green;  // CHANGE BACK TO SEN1COLORS
      break;
    }
    if (sen2Blue()) {
      shirtColor = blue;
      break;
    }
    if (sen2Purple()) {
      shirtColor = purple;
      break;
    }
    if (sen2Black()) {
      shirtColor = black;
      break;
    }
  }

  Serial.print(shirtColor);
  Serial.print("\n");

  // find color to match
  foundTie = tieSelect(shirtColor);
  // if tie is found, do something
  if (foundTie) Serial.print("Looking Dapper Laddy!\n");
  // else SOL
  else Serial.print("SORRY :(\n");
  while (true) {};

  // spin servo until tie of color is found
}

/*---------------------------SENSE THE COLOR------------------------------*/

void senseColor(int s2Port, int s3Port, int oPort) {
  //****************SENSE RED COLOR********************************
  digitalWrite(s2Port, LOW);
  digitalWrite(s3Port, LOW);
  dataR = pulseIn(oPort, LOW);

  //**************** SENSE GREEN COLOR*******************************
  digitalWrite(s2Port, LOW);
  digitalWrite(s3Port, HIGH);
  dataG = pulseIn(oPort, LOW);

  //**************** SENSE BLUE COLOR*******************************
  digitalWrite(s2Port, HIGH);
  digitalWrite(s3Port, HIGH);
  dataB = pulseIn(oPort, LOW);
}
