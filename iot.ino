// Gas Leakage Detector using MQ-2, LED, and Buzzer

int mq2Pin = A0;       // MQ-2 analog output
int ledPin = 8;        // LED pin
int buzzerPin = 9;     // Buzzer pin
int threshold = 300;   // Gas level threshold (adjust after testing)

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(mq2Pin);
  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
}