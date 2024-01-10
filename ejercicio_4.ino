// Definición de pines para el primer semáforo
const int semaforo1Pines[] = {2, 4, 5}; // {rojo, ambar, verde}

// Definición de pines para el segundo semáforo
const int semaforo2Pines[] = {6, 7, 8}; // {rojo, ambar, verde}

void setup() {
  // Inicializar los pines como salidas
  for (int i = 0; i < 3; i++) {
    pinMode(semaforo1Pines[i], OUTPUT);
    pinMode(semaforo2Pines[i], OUTPUT);
  }
}

void loop() {
  // Secuencia: rojo 1 - verde 2 durante 3 segundos
  cambiarSemaforo(semaforo1Pines, HIGH, LOW, LOW);
  cambiarSemaforo(semaforo2Pines, LOW, LOW, HIGH);
  delay(3000);

  // Rojo 1 - ambar 2 (parpadea) durante 500 ms
  parpadear(semaforo1Pines[0], 500);
  parpadear(semaforo2Pines[0], 500);

  // Verde 1 - rojo 2 durante 3 segundos
  cambiarSemaforo(semaforo1Pines, LOW, LOW, HIGH);
  cambiarSemaforo(semaforo2Pines, HIGH, LOW, LOW);
  delay(3000);

  // Ambar 1 (parpadea) - rojo 2 durante 500 ms
  parpadear(semaforo1Pines[1], 500);
  parpadear(semaforo2Pines[0], 500);
}

void cambiarSemaforo(const int* pines, int estadoRojo, int estadoAmbar, int estadoVerde) {
  digitalWrite(pines[0], estadoRojo);
  digitalWrite(pines[1], estadoAmbar);
  digitalWrite(pines[2], estadoVerde);
}

void parpadear(int pin, int duracion) {
  for (int i = 0; i < 5; i++) {
    digitalWrite(pin, HIGH);
    delay(250);
    digitalWrite(pin, LOW);
    delay(250);
  }
}
