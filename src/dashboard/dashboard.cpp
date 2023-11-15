#include "dashboard.hpp"
#include <unistd.h>               // for linux



void EyeLash(std::vector<Light> lights){
    for (int i = 0; i <=5 ;i++) {
        //std::cout << "Empiezo " << std::endl;
        lights[0].ChangePosition();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        lights[1].ChangePosition();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

}
Dashboard::Dashboard(Ui::MainWindow *ui)
    : ui(ui)  // Inicializa el puntero a la interfaz de usuario
{
    Light light1(21, 23, false, "Left", ui->label_luz_izq);
    Light light2(22, 24, false, "Right", ui->label_luz_drc1);
    Raspi.IsConnected(ui->label_rasp_connected);
    // Set up dashboard layout
    std::string error;
    if (Raspi.AssignGPI(21) && Raspi.AssignGPI(23)){
        lights.push_back(light1);
    } else {
        std::cout << "TEST" << std::endl;
        error = "No se puede iniciar luz izq";
    }
    if (Raspi.AssignGPI(22) && Raspi.AssignGPI(24)){
        lights.push_back(light2);
    } else {
        std::cout << "TEST" << std::endl;
        error = "No se puede iniciar luz drc";
    }
    if (error == ""){
        ui->frame->setVisible(false);
    } else{
        QString qError = QString::fromStdString(error);
        ui->label_4->setText("<b><font color='red'>ERROR CON LUCES<br/> " + qError + "</font></b>");
        exit(1);
    }
}

// TODO make real the function
void Dashboard::UpdateDataLights() {
  for (auto &light : lights) {
      light.UpdateLabels();
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

void Dashboard::Eyelashing(){
    lights[1].ChangePosition();
    std::thread step(EyeLash, lights);
    step.detach();
    //step.join();
    //ChangeLightsPosition();
}
