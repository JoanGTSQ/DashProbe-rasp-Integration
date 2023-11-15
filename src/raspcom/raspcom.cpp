#include "raspcom.hpp"
#include <iostream>
#include <thread>
#include <chrono>

Raspberry Raspi;

Raspberry::Raspberry(){
    // if (wiringPiSetup() == -1) {
    //     // Manejo de error en caso de fallo
    //     exit();
    //
    // }
    for (int i = 0; i <= sizeof(GPIList); i++) {
        GPIList[i] = false;
//        std::cout << GPIList[i] << std::endl;
    }
}
void Raspberry::IsConnected(QLabel *labe){
    labe->setText("<font color='green'>Conectado");
}
void Raspberry::Execute(int GPI, int Miliseconds) {
//  std::cout << GPI << Miliseconds << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(Miliseconds));
  // digitalWrite(GPI, HIGH);
  // delay(Miliseconds);
  // digitalWrite(GPI, LOW);
}
bool Raspberry::AssignGPI(int GPI) {
    if (!GPIList[GPI]){
        GPIList[GPI] = true;
        return true;
    }
    std::cout << GPI << " esta ocupada" << std::endl;
    return false;
}
