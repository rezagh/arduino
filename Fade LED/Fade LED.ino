/**

PWM - Pulse Width Modulation

If you provide a light bulb with less power, it shines less brightly. This works differently with an LED, it actually only has two states: on or off. 
How can we ensure that it can appear less brightly? The solution is to make the LED blink very quickly, so fast that our eye can no longer see it. This technique is called Pulse Width Modulation and is often abbreviated as PWM.
In our case, the pulse width is the time that the LED is lit. By making this time longer, the LED lights up brighter. This is shown schematically in the image below.

Not all pins on the Arduino support PWM. This only applies to the Pins marked with a ~

analogWrite vs digitalWrite
digitalWrite can only send two values to a pin: HIGH or LOW. For PWM we are going to use analogWrite that can write an analog value (PWM wave) to a pin



*/
void setup() {
     
     pinMode(LED_BUILTIN, OUTPUT);

}

// The loop() function runs infinitely
 void loop() {
   int ledPin = 11;
     // Fade in
     for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
         analogWrite(ledPin, ledVal);
         delay(15);
     }  
 
     // Fade out
     for(int ledVal = 255; ledVal >= 0; ledVal -=1) {
         analogWrite(ledPin, ledVal);
         delay(15);
     } 
     
     // Pause for 1 second (1000 milliseconds)
     delay(1000);
 
 }