
int ldrPin = A0;     
int ldrValue = 0;  
int led = 7; 

void setup() {
  Serial.begin(9600); 
  pinMode(ldrPin, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  ldrValue = analogRead(ldrPin);  
  Serial.println(ldrValue);      
  
  if (ldrValue > 100) {
    digitalWrite(led, HIGH);
  }else {
    digitalWrite(led, LOW);
  }           

  delay(500);  
}