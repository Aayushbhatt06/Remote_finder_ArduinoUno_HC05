char incoming_value;
int Buzzerpin=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    incoming_value = Serial.read();
    Serial.println(incoming_value);
  
    if(incoming_value == "A"){
      digitalWrite(Buzzerpin,HIGH);

    }else if(incoming_value == "B"){
      digitalWrite(Buzzerpin,LOW);

    }else{
      digitalWrite(Buzzerpin,LOW);
    }
  }

}
