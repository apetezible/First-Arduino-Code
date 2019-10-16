int Led = 13;
int Espera = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode (Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (Led, HIGH);
  delay (Espera * 2);
  digitalWrite (Led, LOW);
  delay (Espera);
}
