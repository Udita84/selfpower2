// Sample Arduino Code
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);  // A0 pin pe sensor
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);  // Send voltage to Python
  delay(100);  // 0.1 second ka delay
}
