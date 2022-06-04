//button is for switching direction so that the robot does not stretch or squish too much
#define BUTTON_PIN 2 
#define ANTENNA_PIN A0
#define LIGHT_PIN A1

// Include the Arduino Stepper Library
#include <Stepper.h>

const int max_speed = 120;
const int min_speed = 20;
const int proxim = 90; //calibrated based on the environment

// Number of steps per output rotation
const int stepsPerRevolution = 200;
const int limit = 3000;
int stepped = 0;
int dir = 1;
int ant = 0;
int dist = 0;

// Create Instance of Stepper library
Stepper myStepper(stepsPerRevolution, 12, 11, 10, 9);

void setup()
{
  pinMode(BUTTON_PIN, INPUT);         
  myStepper.setSpeed(80);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{
  ant = analogRead(ANTENNA_PIN)/2;
  Serial.print("antenna = ");
  Serial.println(ant);
  Serial.println(stepped);
  Serial.print("light = ");
  dist = analogRead(LIGHT_PIN);
  Serial.println(dist);

  if(ant < min_speed) {
    myStepper.setSpeed(min_speed);
  } else if(ant > max_speed) {
    myStepper.setSpeed(max_speed);
  } else {
    myStepper.setSpeed(ant);
  }

  if (digitalRead(BUTTON_PIN)) {       
    Serial.println("pressed");
    delay(40);                        
    while (digitalRead(BUTTON_PIN));
    dir *= -1;
    stepped = 0;
    delay(200);
  } else {
    if(dist >= proxim) {
      if(stepped < limit) {
        myStepper.step(stepsPerRevolution * dir);
        stepped += stepsPerRevolution;
      } else {
        dir *= -1;
        stepped = 0;
        delay(200);
      }
    }
  }
}
