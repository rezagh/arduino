void setup() {
     // initialize digital pin 11 as an output.
     pinMode(11, OUTPUT);
 }
 
 // the loop function runs over and over again forever
 void loop() {
     digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(500);              // wait for a second
     digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
     delay(500);              // wait for a second
}