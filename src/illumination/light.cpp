#include "light.hpp"



Light::Light(int gpiUp, int gpiDown, bool isUp, std::string position, QLabel *labe) {
  this->IsUp = isUp;
  this->GpiUp = gpiUp;
  this->GpiDown = gpiDown;
  this->Position = position;
  this->Label = labe;
  // pinMode(this->GpiDown, OUTPUT);
  // pinMode(this->GpiUp, OUTPUT);
}

std::string Light::ReturnStatus() {
  return "Light " + this->Position + " is " + (this->IsUp ? "Up" : "Down");
}

void Light::UpdateLabels() {
    QString miQString = QString::fromStdString((this->GetPosition()) ? "Arriba" : "Abajo");
    this->Label->setText(miQString);
}

void Light::ChangePosition() {
  auto inicio = std::chrono::high_resolution_clock::now();

  this->IsUp = !IsUp;

  if (this->IsUp) {
    Raspi.Execute(this->GpiDown, SECONDS_EXECUTION);
  } else {
    Raspi.Execute(this->GpiUp, SECONDS_EXECUTION);
  }

  auto fin = std::chrono::high_resolution_clock::now();

  auto duracion = std::chrono::duration_cast<std::chrono::milliseconds>(fin - inicio);

  std::cout << "Light " << this->Position << ": has executed his work in "
            << duracion.count() << " miliseconds, now " << ReturnStatus()
            << std::endl;

  UpdateLabels();
}

bool Light::GetPosition() { return this->IsUp; }

std::string Light::CheckWhereIsLight(){ return this->Position; }
