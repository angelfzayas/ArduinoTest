/*  
    Arduino with PIR motion sensor
    For complete project details, visit: http://RandomNerdTutorials.com/pirsensor
    Modified by Rui Santos based on PIR sensor by Limor Fried
    Used as a CRT Git turorial
*/
 
int led = 8;                // the pin that the LED is atteched to
int sensor = 7;              // the pin that the sensor is atteched to
int state = LOW;             // by default, no motion detected
int val = 0;                 // variable to store the sensor status (value)

void setup() {
//No setup required, KATCHOW!

  /*pinMode(led, OUTPUT);      // initalize LED as an output
  pinMode(sensor, INPUT);    // initialize sensor as an input*/
  Serial.begin(9600);        // initialize serial
}

void loop(){
  printf("just another test!")
}
