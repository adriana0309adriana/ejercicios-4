// Definir los pines de los LEDs
int pins[] = {5, 6, 7, 8, 9, 10, 11};

int numPins = 7; // Número de LEDs

void setup() {
  // Configurar los pines de los LEDs como salidas
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // Encender y apagar los LEDs del pin 5 al 11
  for (int i = 0; i < numPins; i++) {
    digitalWrite(pins[i], HIGH);  // Encender el LED actual
    delay(50);  // Esperar 50 ms
    digitalWrite(pins[i], LOW);   // Apagar el LED actual
  }

  // Encender y apagar los LEDs del pin 11 al 5 en orden inverso
  for (int i = numPins - 1; i >= 0; i--) {
    digitalWrite(pins[i], HIGH);  // Encender el LED actual
    delay(50);  // Esperar 50 ms
    digitalWrite(pins[i], LOW);   // Apagar el LED actual
  }
}
