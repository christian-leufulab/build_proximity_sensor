const int echoPin = 2; 
const int trigPin = 3; 

long duration;
int distance; 

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("Prueba de sensor ultrasónico HC-SR04"); 
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
}
