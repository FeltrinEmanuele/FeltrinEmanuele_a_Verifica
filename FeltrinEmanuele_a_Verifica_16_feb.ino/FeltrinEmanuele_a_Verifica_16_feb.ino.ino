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
  

}

void loop() {
  // put your main code here, to run repeatedly:


}
