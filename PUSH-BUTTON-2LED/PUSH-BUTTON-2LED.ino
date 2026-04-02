#define led 4
#define button 8 
#define led_t 2
#define button_p 12 
 
 
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
   bool x = digitalRead(button);
   // this is for 1st button
   bool y = digitalRead(button_p);
   //this is for 2nd button
   Serial.print("Button status =");
   Serial.println(x);
   Serial.println(y);
   if (x == 1){
    digitalWrite(led, HIGH);
    //Serial.print("LED"is turn ON);
   }
    else{
      digitalWrite(led, LOW);
      //Serual.print("LED"is turn OFF);
    }
 if (y == 1){
   digitalWrite(led_t, HIGH);
 }
  else
  {
    digitalWrite(led_t, LOW);
  }
  }