int rosso;
int giallo;
int bianco;
int verde;
//variabile globare DURATA
int DURATA;

void setup() {
  rosso = 11;
  giallo = 10;
  bianco = 9;
  verde = 8;

  pinMode (rosso,OUTPUT);
  pinMode (giallo,OUTPUT);
  pinMode (bianco,OUTPUT);
  pinMode (verde,OUTPUT);

  Serial.begin(9600);

  ChiediDURATA();

}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(rosso,HIGH);
 delay(DURATA);
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,HIGH);
 delay(2*DURATA);
 digitalWrite(giallo,LOW);
 digitalWrite(bianco,HIGH);
 delay(DURATA);
 digitalWrite(bianco,LOW);
 digitalWrite(verde,HIGH);
 delay(3*DURATA);
 digitalWrite(verde,LOW);


}
void ChiediDURATA()
{
  Serial.println("Quanto deve stare acceso il led rosso?(Secondi)");
  while(Serial.available()==0) {};
  String inp =Serial.readString();
  int DURATAappoggio = inp.toInt();
  DURATA = DURATAappoggio*1000;
}

