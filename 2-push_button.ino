#define led 4
#define button 8
#define led_1 2
#define button_1 7


void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}


void loop() {
   bool y = digitalRead(button_1); //for second 
   bool x = digitalRead(button);  //for first 
   Serial.print("button status = ");
   Serial.println(x);
    Serial.println(y);

  if (x == 1){
    digitalWrite(led, HIGH);
    }
  
  else{
      digitalWrite(led, LOW);
    }

  if (y == 1){
    digitalWrite(led_1, HIGH);
  }

  else{
    digitalWrite(led_1, LOW);
  }

  }void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
