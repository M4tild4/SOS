// SOS-Leuchte
const int LEDROT   = 13;
const unsigned long WARTEZEITkurz = 300;
const unsigned long WARTEZEITlang = 3000;

void setup()                    // Hier beginnt das Setup
{                               // Hier beginnt ein Programmabschnitt
  pinMode(LEDROT,   OUTPUT);    // Pin LEDROT soll ein Ausgang sein
}                               // Hier ist ein Programmabschnitt beendet

void loop()                     // Hier beginnt das Hauptprogramm
{                               // Hier beginnt ein Programmabschnitt
  // dreimal KURZ
  digitalWrite(LEDROT, HIGH);   // Schalte die Spannung an Pin LEDROT ein
  delay(WARTEZEITkurz);             // Warte 1000 Millisekunden
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  digitalWrite(LEDROT, HIGH);   
  delay(WARTEZEITkurz);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  digitalWrite(LEDROT, HIGH);   
  delay(WARTEZEITkurz);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITlang);

  // dreimal LANG
  digitalWrite(LEDROT, HIGH);  
  delay(WARTEZEITlang);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  digitalWrite(LEDROT, HIGH);   
  delay(WARTEZEITlang);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  digitalWrite(LEDROT, HIGH);   
  delay(WARTEZEITlang);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  
  // dreimal KURZ
  digitalWrite(LEDROT, HIGH);  
  delay(WARTEZEITkurz);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  digitalWrite(LEDROT, HIGH);   
  delay(WARTEZEITkurz);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITkurz);
  digitalWrite(LEDROT, HIGH);   
  delay(WARTEZEITkurz);             
  digitalWrite(LEDROT, LOW);
  delay(WARTEZEITlang);
}                               // Programmabschnitt beenden
