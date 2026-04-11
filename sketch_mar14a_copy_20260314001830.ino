// TASK 1 : SERIES ACTION ( Blink 2 LEDs One After Another) 

#define k_led 7 //global declaration
#define p_led 5
 
void setup() {
  pinMode(k_led, OUTPUT);
  pinMode(p_led, OUTPUT);   
  Serial.begin(9600);

}
void loop(){
  digitalWrite(k_led, HIGH);
  Serial.println("LED Turn ON");
  delay(1000);

  digitalWrite(k_led, LOW);
  Serial.println("LED Turn OFF");
  delay(1000);

  digitalWrite(p_led, HIGH);
  Serial.println("LED Turn ON");
  delay(1000);

  digitalWrite(p_led, LOW);
  Serial.println("LED Turn OFF");
  delay(1000);
}
