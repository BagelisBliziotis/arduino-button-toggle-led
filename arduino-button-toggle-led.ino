int readpin = 7;
int bluepin = 9;
int V;

String mode="OFF";
void setup() {
  pinMode(readpin,INPUT);
  pinMode(bluepin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  V = digitalRead(readpin);
  Serial.print("V= ");
  Serial.print(V);
  Serial.print(" mode= ");
  Serial.println(mode);
  if(V==0 && mode == "OFF"){
    digitalWrite(bluepin,HIGH);
    mode = "ON";
    while(V!=1){
      V = digitalRead(readpin);
    }
  }
  else if(V==0 && mode == "ON"){
    digitalWrite(bluepin,LOW);
    mode = "OFF";
    while(V!=1){
      V = digitalRead(readpin);
    }
  }

}
