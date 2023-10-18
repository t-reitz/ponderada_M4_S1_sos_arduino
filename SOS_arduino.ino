// Definindo as constantes e variáveis globais
const int buttonPin = 2; // Pino do botão
const int ledPin = 13;   // Pino do LED
int buttonState = 0;     // Estado atual do botão (HIGH ou LOW)
bool sosActive = false;  // Controla se o loop SOS está ativo ou não

void setup() {
  // Configurando os pinos
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Lê o estado atual do botão
  buttonState = digitalRead(buttonPin);

  // Verifica se o botão foi pressionado
  if (buttonState == LOW) {
    // Alterna o estado do loop SOS
    sosActive = !sosActive;
    // Espera um pouco para evitar leituras múltiplas do botão
    delay(500);
  }

  // Se o loop SOS estiver ativo, executa o código SOS
  if (sosActive) {
    // S
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    
    delay(450);

    // O
    digitalWrite(ledPin, HIGH);
    delay(900);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(900);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(900);
    digitalWrite(ledPin, LOW);
    
    delay(450);

    // S
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    
    delay(700);
  }
}
