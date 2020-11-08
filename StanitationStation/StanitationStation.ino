#include <Servo.h>
#define servoPin 9
Servo myservo;
const int VRxPin = A0;
const int VRyPin = A1;
const int SWPin  = 5;
const int ledPin1 = 13;
const int ledPin2 = 2;
const int ledPin3 = 3;
const int ledPin4 = 4;
int VRx = 0;        // value read from the horizontal pot
int VRy = 0;        // value read from the vertical pot
int SW = 0;         // value read from the switch

void setup() {
  Serial.begin(9600);
  pinMode(SWPin,INPUT_PULLUP);
  myservo.attach(servoPin);
}

void loop() {

  VRx = analogRead(VRxPin);
  VRy = analogRead(VRyPin);
  SW = digitalRead(SWPin);
  myservo.write(10);
  
  if(SW == 0)
  {
    myservo.write(90);
    delay(1000);
    myservo.write(15);
    delay(1000);
    myservo.write(90);
    delay(1000);
    myservo.write(15);
    delay(1000);
     //sucess lights
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(500);

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    delay(500);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(500);

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
  }
    if(VRy == 0||VRy == 1023||VRx == 0||VRx == 1023)
  {
    delay(5000);
    digitalWrite(ledPin1, HIGH);
    
    delay(5000);
    digitalWrite(ledPin2, HIGH);
    
    delay(5000);
    digitalWrite(ledPin3, HIGH);
   
    delay(5000);
    digitalWrite(ledPin4, HIGH);
    delay(5000);

    //Finished
    digitalWrite (ledPin1, LOW);
    digitalWrite (ledPin2, LOW);
    digitalWrite (ledPin3, LOW);
    digitalWrite (ledPin4, LOW);

      //sucess lights
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(500);

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    delay(500);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(500);

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, LOW);
  }
  // print the results to the Serial Monitor:
  Serial.print("VRrx = ");
  Serial.print(VRx);
  Serial.print("\tVRry = ");
  Serial.print(VRy);
  Serial.print("\tSW = ");
  Serial.println(SW);

  delay(200);
}
