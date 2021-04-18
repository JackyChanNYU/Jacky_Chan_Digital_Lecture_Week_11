int ledPin = 8;
int ledPin2 = 9;
int buttonPin = 35;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
  }
}
