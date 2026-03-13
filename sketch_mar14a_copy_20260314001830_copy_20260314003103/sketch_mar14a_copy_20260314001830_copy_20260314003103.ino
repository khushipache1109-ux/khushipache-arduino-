// TASK 2 : PARALLEL ACTION ( Blink 2 LEDs Simultaneously ) 

#define k_led 7 
#define p_led 5
 
void setup() {
  pinMode(k_led, OUTPUT);
  pinMode(p_led, OUTPUT);   
  Serial.begin(9600);

}
void loop(){
  // This is 1st LED 
  digitalWrite(k_led, HIGH);
  digitalWrite(p_led, HIGH);
  Serial.println("LED Turn ON");
  delay(1000);
// This is 2nd LED 
  digitalWrite(k_led, LOW);
  digitalWrite(p_led, LOW);
  Serial.println("LED Turn OFF");
  delay(1000);
}
