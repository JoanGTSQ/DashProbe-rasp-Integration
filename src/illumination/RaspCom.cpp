#include "light.hpp"
#include <unistd.h>     

void Execute(int GPI, int Miliseconds) {
  GPI = GPI;
  Miliseconds = Miliseconds;
  sleep(Miliseconds); // Comentar esta linea cuando se habilite raspicom
  // digitalWrite(GPI, HIGH);
  // delay(Miliseconds);
  // digitalWrite(GPI, LOW);
}
