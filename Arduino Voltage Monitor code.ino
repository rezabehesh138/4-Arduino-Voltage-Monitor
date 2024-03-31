void setup() {
  Serial.begin(9600); //setup serial
}

void loop() {

  float volt = analogRead(A0); //Read the input pin
  float RealVolt = (volt / 1023) * 5; //Calculating the real voltage value based on the analog sensor reading
  Serial.print("voltage = "); //show character
  Serial.println(RealVolt);//show voltage value
  delay(1000); //waits for asecond
}
