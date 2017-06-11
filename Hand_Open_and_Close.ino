 //This code is just for reading thes sensor values on the serial monitor 
 //Establishes the MyoSensor pins
int sensorPin0 = A0; //setting up the two signal pins as inputs 
int sensorPin1 = A1;

 void setup() {

  Serial.begin(9600);
  //read the input on analog pin A0 and A1:
  
}

void loop() {
  int sensorValue0= analogRead(sensorPin0);
  int sensorValue1= analogRead(sensorPin1);
  delay(100); //in milliseconds 
  Serial.println(sensorValue0);
  Serial.println(sensorValue1);
 
  }

}
