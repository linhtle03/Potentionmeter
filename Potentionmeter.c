int sensorPin = 0;    

// Variable for storing the pin number that the LED is connected to                 
int ledPin = 13;      

// this function runs once when the sketch starts up
void setup() 
{
  //set ledPin (13) as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

// this function runs repeatedly after setup() finishes
void loop() 
{

  //create a local variable (variable that can only be used inside of loop() to store       //a sensor value called sensorValue
  int sensorValue;

  //use the analogRead() function to read sensorPin and store the value in sensorValue
  sensorValue = analogRead(sensorPin);    

  // Turn the LED on
  digitalWrite(ledPin, HIGH);     


  delay(sensorValue);             

  // Turn the LED off
  digitalWrite(ledPin, LOW);      

 //delay for the value of sensorValue
  delay(sensorValue);             

  //loop back to the top
}
