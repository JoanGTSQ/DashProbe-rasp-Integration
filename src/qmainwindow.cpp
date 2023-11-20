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

void MainWindow::StartButton_clicked()
{
    if (!isRunning) {
        // Iniciar el temporizador
        timer->start(1);  // El temporizador se dispara cada milisegundo
        isRunning = true;
    }
}

void MainWindow::StopButton_clicked()
{
    if (isRunning) {
        // Detener el temporizador
        timer->stop();
        isRunning = false;
    }
}

void MainWindow::ResetButton_clicked()
{
    // Reiniciar el cronómetro
    elapsedTime = QTime(0, 0, 0, 0);
    ui.timeLabel->setText(elapsedTime.toString("hh:mm:ss.zzz"));
}

void MainWindow::UpdateTimer()
{
    // Actualizar el tiempo transcurrido
    elapsedTime = elapsedTime.addMSecs(1);
    ui.timeLabel->setText(elapsedTime.toString("hh:mm:ss.zzz"));
}
