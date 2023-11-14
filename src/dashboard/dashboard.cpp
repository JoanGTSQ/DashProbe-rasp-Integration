#include "dashboard.hpp"



Dashboard::Dashboard(Ui::MainWindow *ui)
    : ui(ui)  // Inicializa el puntero a la interfaz de usuario
{
    // Otras inicializaciones si es necesario
}


void Dashboard::SetUpDashboard() {
  // if (wiringPiSetup() == -1) {
  //     // Manejo de error en caso de fallo
  //     exit();
  // }
  // Set up dashboard layout
  Light light1(21, 23, false, "Left");
  Light light2(22, 24, false, "Right");
  lights.push_back(light1);
  lights.push_back(light2);
  //
}

// TODO make real the function
void Dashboard::UpdateDataLights() {
  for (auto &light : lights) {
    if (light.CheckWhereIsLight() == "Left"){
        if(ui){
            std::string miString = (light.GetPosition()) ? "arriba" : "abajo";
            QString miQString = QString::fromStdString(miString);
            ui->label_luz_izq->setText(miQString);
        } else {
            std::cout << "pete" << std::endl;
        }
    } else if(light.CheckWhereIsLight() == "Right") {
        if(ui){
            std::string miString = (light.GetPosition()) ? "arriba" : "abajo";
            QString miQString = QString::fromStdString(miString);
            ui->label_luz_drc1->setText(miQString);
        } else {
            std::cout << "pete" << std::endl;
        }
    }
     std::cout << light.ReturnStatus() << std::endl;
  }
}

void Dashboard::ChangeLightsPosition() {
  if (lights[0].GetPosition() == lights[1].GetPosition()) {
    std::thread step1(&Light::ChangePosition, &lights[0]);
    std::thread step2(&Light::ChangePosition, &lights[1]);
    step1.join();
    step2.join();
  } else {
    std::thread step1(&Light::ChangePosition, &lights[1]);
    step1.join();
  }
UpdateDataLights();
  std::cout << "Tarea finalizada: luces cambiadas de posicion" << std::endl;
}

void Dashboard::ChangeSingleLightPosition(std::string light) {
  std::cout << "Starting with " << light << std::endl;
  if (light == "Left") {
    std::thread fil(&Light::ChangePosition, &lights[0]);
    fil.join();
  } else if (light == "Right") {
    std::thread fil(&Light::ChangePosition, &lights[1]);
    fil.join();
  }
  UpdateDataLights();
}

void Dashboard::LoadDashboard(){
    UpdateDataLights();
}
