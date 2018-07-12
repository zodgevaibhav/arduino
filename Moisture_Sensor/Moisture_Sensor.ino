void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState=analogRead(A0);
Serial.println(buttonState);
//if(buttonState==1)
//{
//  digitalWrite(13,HIGH);
//}else{
//  digitalWrite(13,LOW);
//}
delay(1);
}
