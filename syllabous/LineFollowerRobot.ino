int led = 13;   // Built-in LED

void setup() {
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {

    char data = Serial.read();

    if (data == '1') {
      digitalWrite(led, HIGH);   // LED ON
    }

    if (data == '0') {
      digitalWrite(led, LOW);    // LED OFF
    }
  }
}