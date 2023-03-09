/*
This is a write and then read from the serial port
if you write in setup but i do not think it works because the write is done before we go into the read
**/

int inByte;

void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.println("Ready");
}

void loop(){

  //Serial.write(45);

  if(Serial.available() > 0){
    inByte = Serial.read();
    if(inByte =='a'){
        digitalWrite(LED_BUILTIN,HIGH);
        delay(500);
        Serial.println("LED ON");
    }else{
      digitalWrite(LED_BUILTIN,LOW);
      Serial.println("LED OFF");
    }
  }

  delay(5000);
}