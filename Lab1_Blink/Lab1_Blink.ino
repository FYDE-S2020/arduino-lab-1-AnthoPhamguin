#define LED_PIN 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);

}

void timedBlink(int interval) {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);   
}

void loop(){
  timedBlink(125);
  timedBlink(250);
  timedBlink(500);
}
