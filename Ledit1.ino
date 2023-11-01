//ledien vilkutusta

void setup() {
  // asetetaan pinnit outputeiksi.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

// vilkutellaan ledejä
void loop() 
{
  digitalWrite(10, HIGH);   // 
  delay(300);                       // 
  digitalWrite(10, LOW);    // 
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
