#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// ---------------- LCD ----------------
// Endereço mais comum: 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ---------------- SERVO ----------------
Servo portaServo;

// ---------------- BOTÕES ----------------
const int botao0 = 0;
const int botao1 = 1;
const int botao2 = 2;

// ---------------- VARIÁVEIS ----------------
int andarAtual = 0;
int andarDestino = 0;
bool portaAberta = false;

void setup() {

  // Configuração dos botões
  pinMode(botao0, INPUT_PULLUP);
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);

  // Inicializa LCD
  lcd.init();
  lcd.backlight();

  // Inicializa Servo
  portaServo.attach(9);

  // Porta começa fechada
  fecharPorta();

  mostrarStatus();
}

void loop() {

  // Leitura dos botões
  if (digitalRead(botao0) == LOW) {
    andarDestino = 0;
    moverElevador();
  }

  if (digitalRead(botao1) == LOW) {
    andarDestino = 1;
    moverElevador();
  }

  if (digitalRead(botao2) == LOW) {
    andarDestino = 2;
    moverElevador();
  }
}

// ------------------------------------------------
// FUNÇÃO PARA MOSTRAR STATUS NO LCD
// ------------------------------------------------
void mostrarStatus() {

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Atual:");
  lcd.print(andarAtual);

  lcd.setCursor(10, 0);
  lcd.print("Dest:");
  lcd.print(andarDestino);

  lcd.setCursor(0, 1);

  if (portaAberta) {
    lcd.print("Porta: Aberta ");
  } else {
    lcd.print("Porta: Fechada");
  }
}

// ------------------------------------------------
// FUNÇÃO MOVER ELEVADOR
// ------------------------------------------------
void moverElevador() {

  fecharPorta();

  int andaresPercorridos = abs(andarDestino - andarAtual);

  while (andarAtual != andarDestino) {

    if (andarDestino > andarAtual) {

      andarAtual++;

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Subindo...");
      lcd.setCursor(0, 1);
      lcd.print("Andar: ");
      lcd.print(andarAtual);

    } else {

      andarAtual--;

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Descendo...");
      lcd.setCursor(0, 1);
      lcd.print("Andar: ");
      lcd.print(andarAtual);
    }

    delay(1500);
  }

  // Chegou ao destino
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Chegou no ");
  lcd.print(andarDestino);

  lcd.setCursor(0, 1);
  lcd.print("Percorreu:");
  lcd.print(andaresPercorridos);

  delay(3000);

  abrirPorta();

  mostrarStatus();

  delay(3000);

  fecharPorta();

  mostrarStatus();

  delay(500);
}

// ------------------------------------------------
// ABRIR PORTA
// ------------------------------------------------
void abrirPorta() {

  portaAberta = true;

  portaServo.write(90);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Abrindo Porta");

  delay(2000);
}

// ------------------------------------------------
// FECHAR PORTA
// ------------------------------------------------
void fecharPorta() {

  portaAberta = false;

  portaServo.write(0);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fechando Porta");

  delay(2000);
}