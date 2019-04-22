// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(5,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, LOW); 
  delay(1); // wait for a second  
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(5, HIGH);
  delay(17);   // wait for a second
  
}


