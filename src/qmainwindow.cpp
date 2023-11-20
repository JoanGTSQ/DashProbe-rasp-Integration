#include "Qmainwindow.h"



void MainWindow::ChangeSingleLight() {
    if (ui.radioButtonLeftLight->isChecked()) {
      dash->ChangeSingleLightPosition("Left");
    } else if (ui.radioButtonTwoLights->isChecked()) {
      dash->ChangeLightsPosition();
    } else if (ui.radioButtonRightLight->isChecked()) {
      dash->ChangeSingleLightPosition("Right");
    }
}
