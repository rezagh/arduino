int inByte;

void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  Serial.println("Ready");
}

void loop(){
  if(Serial.available() > 0){
    inByte = Serial.read();
    if(inByte =='a'){
      digitalWrite(13,HIGH);
      Serial.println("LED ON")
    }else{
      digitalWrite(13,LOW);
      Serial.println("LED ON")
    }
  }
}