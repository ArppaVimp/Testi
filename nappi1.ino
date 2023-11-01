
// määritellään muuttujat Ledeille
const int nappiPin = 2; //vakio, painonapin pinni
int ledVih1 = 12;//muuttujan ledVih arvokasi annetaan 13 (pinni)
int napinTila = 0; //alustetaan painonappi
// the setup function runs once when you press reset or power the board
void setup() {
  // asetetaan pinnit outputeiksi.
pinMode(ledVih, OUTPUT);//13
 // asetetaan painonappi inputiksi
pinMode(nappiPin, INPUT);

}

// vilkutellaan ledejä
void loop() 
{
  napinTila = digitalRead(nappiPin); //luetaan painonapin tila muuttujaan 

  if(napinTila == HIGH)
  {
    digitalWrite(ledVih, HIGH);//sytytetään vihreä ledi
    
  }
  else
  {
    digitalWrite(ledVih, LOW); //sammutetaan vihreä ledi
  }

} 
