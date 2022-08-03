//Gustavo Leyva

int dato=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Inicia comunicación serial");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<10;i++){
  dato++;
  Serial.println(dato);
  Serial.println(i);
  if(dato>20) dato=0;}
  delay(1000);
}
