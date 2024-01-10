const int pin_led1 = 1;
const int pin_led2 = 2;
const int pin_led3 = 3;
const int pin_led4 = 4;
const int pin_led5 = 5;
const int pin_led6 = 6;
const int pin_led7 = 7;
const int pin_led8 = 8;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(1, HIGH);
  delay(200); 
  digitalWrite(3, HIGH);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(6, HIGH);
  delay(200);     
  digitalWrite(8, HIGH);
  delay(200); 
  digitalWrite(11, HIGH);
  delay(200); 
  digitalWrite(12, HIGH);
  delay(200); 
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(200);                      // wait for a second
}
