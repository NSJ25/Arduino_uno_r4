//initilisation des leds
int led1 = 1;
int led2 = 2;

//initialisation des boutons
int btn = 3;
int btnBuzzer = 4;

//initialisation du buzzer
int buzzer = 5;

//initialisation de la led rgb
int redPin = 6;
int greenPin = 7;
int bluePin = 8;


void setup() {
  // Déclaration des broches comme sorties ou entrées
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  pinMode(btnBuzzer, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void allumer() {
  // Lire l’état du bouton (LOW = appuyé, HIGH = relâché)
  int btnEtat = digitalRead(btn);
  
  if (btnEtat == LOW){
    digitalWrite(led1, HIGH);
    delay(2000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(2000);
    digitalWrite(led2, LOW);
  } else{
    // Si bouton pas appuyé, LEDs éteintes
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}

void controlBuzzer() {
 int btnBuzzEtat = digitalRead(btnBuzzer);
 if (btnBuzzEtat == LOW){
  // Si bouton appuyé, allumer led1 pendant 2 secondes, puis led2 pendant 2 secondes
  digitalWrite(buzzer, HIGH);
  digitalWrite(greenPin, HIGH);
  delay(5000);
 } else{
  digitalWrite(redPin, HIGH);
  digitalWrite(buzzer, LOW);
 }
}


//
void loop() {
  controlBuzzer();
  allumer();
}
