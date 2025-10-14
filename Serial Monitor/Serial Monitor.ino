int suhuC = 90;
int suhuF;

void setup() {
  Serial.begin(9600);
}

void loop() {
  suhuF = suhuC+32;
  Serial.print("Celsius =");
  Serial.print(suhuC);
  Serial.print("C Fahrenheit =");
  Serial.print(suhuF);
  Serial.println(" F");
  delay(1000);

}
