//Include your library here

int C5 = ; //First button on pin _?
int D = ; //Second button on pin _?
int E = ; //Third button on pin _?
int F = ; //Fourth button on pin _?
int G = ; //Fifth button on pin _?
int A = ; //Sixth button on pin _?
int B = ; //Seventh button on pin _?
int C6 = ; //Eighth button on pin _?

int c5[] = {N_C5}; //Plays C Note
int d[] = {N_D5}; //Plays D Note
int e[] = {N_E5}; //Plays E Note
int f[] = {N_F5}; //Plays F Note
int g[] = {N_G5}; //Plays G Note
int a[] = {N_A5}; //Plays A Note
int b[] = {N_B5}; //Plays B Note
int c6[] = {N_C6}; //Plays C Note

int duration(500); //Every note lasts 500 milliseconds. You can change it as you like

void setup() {
  //Set every button as an INPUT_PULLUP
  pinMode(C5, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  pinMode(E, INPUT_PULLUP);
  pinMode(F, INPUT_PULLUP);
  pinMode(G, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C6, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(C5) == LOW) { //Reads button state when pressed
    for (int Note = 0; Note < 1; Note++) {
      tone(5, c5[Note], duration); //Plays note on pin 5, where the Buzzer is connected (change it if you connected it on another pin)
    }
  }
  if (digitalRead(D) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, d[Note], duration);
    }
  }
  if (digitalRead(E) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, e[Note], duration);
    }
  }
  if (digitalRead(F) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, f[Note], duration);
    }
  }
  if (digitalRead(G) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, g[Note], duration);
    }
  }
  if (digitalRead(A) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, a[Note], duration);
    }
  }
  if (digitalRead(B) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, b[Note], duration);
    }
  }
  if (digitalRead(C6) == LOW) {
    for (int Note = 0; Note < 1; Note++) {
      tone(5, c6[Note], duration);
    }
  }
}
