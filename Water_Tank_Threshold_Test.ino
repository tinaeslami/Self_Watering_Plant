

// These constants won't change. They're used to give names to the pins used:
const int waterLevelPin = A3; // Analoge pin water level sensor is connected to  - below 50 = refill


int sensorWaterLevelValue = 0;        // somewhere to store the value read from the waterlevel sensor
  
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  sensorWaterLevelValue = analogRead(waterLevelPin); //read the value of the water level sensor
  Serial.print("Water level sensor value: "); //print it to the serial monitor
  Serial.println(sensorWaterLevelValue);

   delay(300); //wait before checking the water level

}
