int led = 13;
int vs =9; // vibration sensor

void setup(){
  pinMode(led, OUTPUT);
  pinMode(vs, INPUT); 
  Serial.begin(9600); 

}
void loop(){
  long measurement =vibration();
  delay(100);
  if (measurement > 100){
    digitalWrite(led, HIGH);
    Serial.println(measurement);
  }
  else{
    digitalWrite(led, LOW); 
  }
}

long vibration(){
  long measurement=pulseIn (vs, HIGH);  //wait for the pin to get HIGH and returns measurement
  return measurement;
}
