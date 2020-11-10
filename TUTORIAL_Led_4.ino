/*
   TUTORIAL LED BERKEDIP BERGANTIAN PADA ARDUINO 
   GABUNG DENGAN POTENSIO
   
   D4 -> Led Merah
   D5 -> Led Hijau
   D6 -> Led Biru
   D7 -> Led Kuning

   Potensio :
   kaki kiri -> VCC
   kaki tengah -> A0
   kaki kanan -> GND

*/

#define merah 4 
#define hijau 5 
#define biru 6 
#define kuning 7 

int jeda; //variabel untuk menyimpan waktu jeda delay nyala led

void setup() {
  pinMode(A0, INPUT); //set A0 menjadi input
  
  pinMode(merah, OUTPUT); //set menjadi output
  pinMode(hijau, OUTPUT); //set menjadi output
  pinMode(biru, OUTPUT); //set menjadi output
  pinMode(kuning, OUTPUT); //set menjadi output
}

void loop() {
  jeda = analogRead(A0); //baca nilai A0 dan simpan ke variabel jeda
  nyalaKuning();
  nyalaBiru();
  nyalaHijau();
  nyalaMerah();
}

//membuat sub-sub program

void nyalaKuning(){
  digitalWrite(kuning, HIGH); //menyalakan led kuning (memberi tegangan 5V)
  digitalWrite(biru, LOW); //mematikan led biru(memberi tegangan 0V)
  digitalWrite(hijau, LOW); //mematikan led hijau(memberi tegangan 0V)
  digitalWrite(merah, LOW); //mematikan led merah(memberi tegangan 0V)
  delay(jeda); 
}

void nyalaBiru(){
  digitalWrite(kuning, LOW); //mematikan led kuning (memberi tegangan 0V)
  digitalWrite(biru, HIGH); //menyalakan led biru(memberi tegangan 5V)
  digitalWrite(hijau, LOW); //mematikan led hijau(memberi tegangan 0V)
  digitalWrite(merah, LOW); //mematikan led merah(memberi tegangan 0V)
  delay(jeda); 
}

void nyalaHijau(){
  digitalWrite(kuning, LOW); //mematikan led kuning (memberi tegangan 0V)
  digitalWrite(biru, LOW); //mematikan led biru(memberi tegangan 0V)
  digitalWrite(hijau, HIGH); //menyalakan led hijau(memberi tegangan 5V)
  digitalWrite(merah, LOW); //mematikan led merah(memberi tegangan 0V)
  delay(jeda); 
}

void nyalaMerah(){
  digitalWrite(kuning, LOW); //mematikan led kuning (memberi tegangan 0V)
  digitalWrite(biru, LOW); //mematikan led biru(memberi tegangan 0V)
  digitalWrite(hijau, LOW); //mematikan led hijau(memberi tegangan 0V)
  digitalWrite(merah, HIGH); //menyalakan led merah(memberi tegangan 5V)
  delay(jeda);  
}
