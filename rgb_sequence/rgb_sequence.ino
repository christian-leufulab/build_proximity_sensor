const int redLed = 5;
const int greenLed = 6;
const int blueLed = 9;

const int delay_time = 500;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}
 
void loop() {
  // Rojo
  analogWrite(redLed, 255);
  analogWrite(greenLed, 0);
  analogWrite(blueLed, 0);
  delay(delay_time);
  // Verde
  analogWrite(redLed, 0);
  analogWrite(greenLed, 255);
  analogWrite(blueLed, 0);
  delay(delay_time);
  // Azul
  analogWrite(redLed, 0);
  analogWrite(greenLed, 0);
  analogWrite(blueLed, 255);
  delay(delay_time);
  // Magenta
  analogWrite(redLed, 255);
  analogWrite(greenLed, 0);
  analogWrite(blueLed, 255);
  delay(delay_time);
  // Amarillo
  analogWrite(redLed, 255);
  analogWrite(greenLed, 255);
  analogWrite(blueLed, 0);
  delay(delay_time);
  // Cian
  analogWrite(redLed, 0);
  analogWrite(greenLed, 255);
  analogWrite(blueLed, 255);
  delay(delay_time);
  // Blanco
  analogWrite(redLed, 255);
  analogWrite(greenLed, 255);
  analogWrite(blueLed, 255);
  delay(delay_time);
}
