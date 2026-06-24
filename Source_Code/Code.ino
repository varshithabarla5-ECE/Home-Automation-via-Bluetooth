int light1 = 23;   // Red LED
int light2 = 22;   // Yellow LED
int fan = 21;      // Green LED
int socket = 19;   // Blue LED

void setup() {

  Serial.begin(115200);

  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(socket, OUTPUT);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(socket, LOW);

  Serial.println("================================");
  Serial.println("HOME AUTOMATION VIA BLUETOOTH");
  Serial.println("ESP32 Simulation Started");
  Serial.println("================================");

  Serial.println("Commands:");
  Serial.println("1 -> Room Light ON");
  Serial.println("2 -> Room Light OFF");
  Serial.println("3 -> Bed Lamp ON");
  Serial.println("4 -> Bed Lamp OFF");
  Serial.println("5 -> Fan ON");
  Serial.println("6 -> Fan OFF");
  Serial.println("7 -> Socket ON");
  Serial.println("8 -> Socket OFF");
}

void loop() {

  if (Serial.available()) {

    char command = Serial.read();

    switch (command) {

      case '1':
        digitalWrite(light1, HIGH);
        Serial.println("Room Light ON");
        break;

      case '2':
        digitalWrite(light1, LOW);
        Serial.println("Room Light OFF");
        break;

      case '3':
        digitalWrite(light2, HIGH);
        Serial.println("Bed Lamp ON");
        break;

      case '4':
        digitalWrite(light2, LOW);
        Serial.println("Bed Lamp OFF");
        break;

      case '5':
        digitalWrite(fan, HIGH);
        Serial.println("Fan ON");
        break;

      case '6':
        digitalWrite(fan, LOW);
        Serial.println("Fan OFF");
        break;

      case '7':
        digitalWrite(socket, HIGH);
        Serial.println("Socket ON");
        break;

      case '8':
        digitalWrite(socket, LOW);
        Serial.println("Socket OFF");
        break;
    }
  }
}
