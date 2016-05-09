 //Establishes pins 5 and 6 (PWM) as the LED pins, and pin 8 (digital) as the pin for the hand
 //Establishes the MyoSensor pins
int sensorPin0 = A0;
int sensorPin1 = A1;
int led5 = 5;
int led6 = 6;
int DI1 = 12;
int DI2 = 13;
 void setup() {
  pinMode (led5,OUTPUT);
  pinMode (led6,OUTPUT);
  pinMode (DI1,OUTPUT);
  pinMode (DI2,OUTPUT);
  Serial.begin(9600);
  //read the input on analog pin A0 and A1:
  
}

void loop() {
  int sensorValue0= analogRead(sensorPin0);
  int sensorValue1= analogRead(sensorPin1);
  delay(100); 
  //Makes LEDs fade, with intensity of muscle contraction
  analogWrite(led5, sensorValue0/3);
  analogWrite(led6, sensorValue1/3);
  Serial.println(sensorValue0);
  Serial.println(sensorValue1);
  delay(10);
  if (sensorValue1>200) {
    digitalWrite(DI1, HIGH);
    digitalWrite(DI2, LOW);
  } else {
    digitalWrite(DI1,  LOW);
    digitalWrite(DI2, HIGH);
  }
  
 /* if (sensorValue1>500) {
    digitalWrite(DI2, HIGH);
    digitalWrite(DI1, LOW);
  }
 
  
  if (sensorValue1&&sensorValue0>500) {
    digitalWrite(DI1, LOW);
    digitalWrite(DI2, LOW);
  }
  
 */
}
