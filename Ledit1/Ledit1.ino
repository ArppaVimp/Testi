//ledien vilkutusta

void setup() {
  // asetetaan pinnit outputeiksi.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

// vilkutellaan ledejä
void loop() 
{
  digitalWrite(12, HIGH);   // 
  delay(300);                       // 
  digitalWrite(12, LOW);    // 
  delay(300); //
   
  digitalWrite(11, HIGH);   // 
  delay(300);                       // 
  digitalWrite(11, LOW);    // 
  delay(300);                       // 
  
  digitalWrite(13, HIGH);   // 
  delay(300);                       // 
  digitalWrite(13, LOW);    // 
  delay(300);                       // 

  
}
