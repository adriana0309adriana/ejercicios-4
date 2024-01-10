const int pulsadorPin = 4;  // Pin del pulsador
const int leds[] = {5, 6, 7, 8};  // Pines de los LEDs
const int numLEDs = 4;  // Número de LEDs
const int tiempoEncendido = 200;  // Tiempo de encendido en milisegundos

void setup() {
  // Configurar pines de LEDs como salidas
  for (int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
  }

  // Configurar pin de pulsador como entrada
  pinMode(pulsadorPin, INPUT);
}

void loop() {
  if (digitalRead(pulsadorPin) == HIGH) {
    // Llamar a la función para la secuencia
    secuenciaLEDs();
  }
}

void secuenciaLEDs() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], HIGH);  // Encender el LED actual
    delay(tiempoEncendido);
    digitalWrite(leds[i], LOW);  // Apagar el LED actual
    delay(tiempoEncendido);
  }
}

