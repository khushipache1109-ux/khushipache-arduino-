// This is for LED Blink by GPIO pin and GND pin 

#define ledpin 8
#define gndpin 9

void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(gndpin,OUTPUT);
  Serial.begin(9600);
  digitalWrite(gndpin, LOW);

}
void loop(){
  digitalWrite(ledpin, HIGH);
  Serial.println("led turn ON");
  delay(1000);

  digitalWrite(ledpin, LOW);
  Serial.println("led turn OFF");
  delay(1000);
}
