//This is my first Arduino program 
// This is for blink LED
#define my_led 7 //global declaration 
void setup() {
     pinMode(my_led, OUTPUT);
}
void loop(){
  digitalWrite(my_led, HIGH);
  Serial.println("LED Turn ON");
  delay(1000);

  digitalWrite(my_led, LOW);
  Serial.println("LED Turn OFF");
  delay(1000);

}
