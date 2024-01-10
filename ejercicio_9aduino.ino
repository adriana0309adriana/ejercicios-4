const int numLEDs = 11;      // Número de LEDs en la línea
const int velocidad = 100;    // Velocidad del movimiento de la estrella (menos es más rápido)
const int longitudCola = 3;   // Longitud de la cola de la estrella

int estrellaPos = 0;          // Posición actual de la estrella

void setup() {
  for (int i = 2; i < 2 + numLEDs; i++) {
    pinMode(i, OUTPUT);       // Configura los pines de los LEDs como salidas
  }
}

void loop() {
  // Enciende la estrella en la posición actual
  digitalWrite(2 + estrellaPos, HIGH);
  
  // Apaga el LED en la posición de la cola
  int colaPos = estrellaPos + longitudCola;
  if (colaPos >= numLEDs) {
    colaPos -= numLEDs;
  }
  digitalWrite(2 + colaPos, LOW);
  
  // Espera un breve período de tiempo para crear el efecto de movimiento
  delay(velocidad);
  
  // Avanza la posición de la estrella
  estrellaPos++;
  if (estrellaPos >= numLEDs) {
    estrellaPos = 0;
  }
}