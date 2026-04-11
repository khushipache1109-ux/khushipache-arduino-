#define pot A0
#define led 4
void setup(){
  Serial.begin(9600);
pinMode(pot, INPUT);
  pinMode(led, OUTPUT);

}
void loop(){
  int x = analogRead(pot);
  Serial.print("POT Value =");
  Serial.println(x);

  digitalWrite(led, HIGH);
}