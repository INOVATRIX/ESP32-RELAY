#define relay1 5                  //  Define Pin of the Relay

void setup(){

  pinMode(relay1,OUTPUT);         // Setting the Pin to output signal

}

void loop(){

  digitalWrite(relay1, LOW);    // Writing value "LOW" to the pin
  delay(1000);                  // Delay in miliseconds 
  digitalWrite(relay1, HIGH);   // Writing value "HIGH" to the pin
  delay(1000);

}
