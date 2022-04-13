const int redLed = 5;
const int greenLed = 6;
const int blueLed = 9;

const int delay_time = 1000;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
}

void loop() {
  digitalWrite(redLed, HIGH);
  delay(delay_time);
  digitalWrite(redLed, LOW);
  delay(delay_time);

  digitalWrite(greenLed, HIGH);
  delay(delay_time);
  digitalWrite(greenLed, LOW);
  delay(delay_time);

  digitalWrite(blueLed, HIGH);
  delay(delay_time);
  digitalWrite(blueLed, LOW);
  delay(delay_time);
}
