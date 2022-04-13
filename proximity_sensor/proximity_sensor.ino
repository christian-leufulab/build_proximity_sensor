const int echoPin = 2; 
const int trigPin = 3; 

const int redLed = 5;
const int greenLed = 6;
const int blueLed = 9;

long duration;
int distance; 

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  
  Serial.begin(9600); 
  Serial.println("Contruye un sensor de proximidad");
  Serial.println();
  Serial.println("14K - LeufuLab");
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; 
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance < 15)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, LOW);
  }

  else if( (15 < distance) && (distance < 30))
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, HIGH);
    digitalWrite(blueLed, LOW);
  }

  else if(40 < distance )
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(blueLed, LOW);
  }
}
