void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() >= 8) {  // Check if there are enough bytes available to read
    float var1, var2;
    Serial.readBytes((char*)&var1, sizeof(var1));  // Read the first variable
    Serial.readBytes((char*)&var2, sizeof(var2));  // Read the second variable
    // Do something with the variables...
 
    Serial.print(var1);
    Serial.print(",");
    Serial.println(var2);
    
    // do something with var1 and var2
  }
}

