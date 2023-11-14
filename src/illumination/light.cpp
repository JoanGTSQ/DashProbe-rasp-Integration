#include "light.hpp"
#include <iostream>

Light::Light(int gpiUp, int gpiDown, bool isUp, std::string position) {
  this->IsUp = isUp;
  this->GpiUp = gpiUp;
  this->GpiDown = gpiDown;
  this->Position = position;
  // pinMode(this->GpiDown, OUTPUT);
  // pinMode(this->GpiUp, OUTPUT);
}

std::string Light::ReturnStatus() {
  return "Light " + this->Position + " is " + (this->IsUp ? "Up" : "Down");
}

void Light::ChangePosition() {
  auto inicio = std::chrono::high_resolution_clock::now();

  // READ DATA AND UPDATE
  this->IsUp = !IsUp;

  if (this->IsUp) {
    Execute(this->GpiDown, SECONDS_EXECUTION);
  } else {
    Execute(this->GpiUp, SECONDS_EXECUTION);
  }

  auto fin = std::chrono::high_resolution_clock::now();
  auto duracion =
      std::chrono::duration_cast<std::chrono::milliseconds>(fin - inicio);
  std::cout << "Light " << this->Position << ": has executed his work in "
            << duracion.count() << " miliseconds, now " << ReturnStatus()
            << std::endl;
}
bool Light::GetPosition() { return this->IsUp; }

std::string Light::CheckWhereIsLight(){ return this->Position; }
