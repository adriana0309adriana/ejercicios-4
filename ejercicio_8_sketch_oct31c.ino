const int potPin = A0;  // Pin del potenciómetro
const int ledPin = 9;   // Pin del LED
int potValue = 0;       // Variable para almacenar el valor del potenciómetro
int ledBrightness = 0;   // Variable para almacenar el brillo del LED

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // Inicializar la comunicación serial a 9600 bps
}

void loop() {
  potValue = analogRead(potPin);  // Leer el valor del potenciómetro (rango de 0 a 1023)

  // Mapear el valor del potenciómetro al rango de brillo del LED (de 0 a 255)
  if (potValue >= 0 && potValue < 512) {
    ledBrightness = 255;  // Nivel de potencia máxima
  } else if (potValue >= 512 && potValue <= 1023) {
    ledBrightness = 64;   // Nivel de potencia 64
  }
  
  analogWrite(ledPin, ledBrightness);  // Establecer el brillo del LED
  Serial.println(potValue);  // Mostrar el valor del potenciómetro en la consola
  delay(100);  // Esperar un breve momento para evitar lecturas erráticas
}
