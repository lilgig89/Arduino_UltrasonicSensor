#include <NewPing.h>

#define PIN_TRIGGER 12
#define PIN_ECHO 11
#define MAX 500

NewPing sonar(PIN_TRIGGER, PIN_ECHO, MAX);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lettura = sonar.ping_cm();
  Serial.print("   Cm ");
  Serial.print(lettura);
  delay(50);
}
