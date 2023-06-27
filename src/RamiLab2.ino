SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint8_t value; 


void setup() {

  pinMode(D5,OUTPUT);
  Serial.begin(9600);    
      
}

void loop() {
  value = analogRead(A5);  
  Serial.println(value);   
  delay(value);
  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5,LOW);

}