#ifndef DASHBOARDA_HPP
#define DASHBOARDA_HPP

#include <vector>
#include <iostream>
#include <thread>
#include "../illumination/light.hpp"
#include "../../ui_Qmainwindow.h"  // Ajusta la ruta según la ubicación real de ui_mainwindow.h
#include "../raspcom/raspcom.hpp"
#include <atomic>
#include <unistd.h>               // for linux


class Dashboard {
  std::vector<Light> lights;
  Ui::MainWindow *ui;

public:
  Dashboard(Ui::MainWindow *ui);
  void UpdateDataLights();
  void ChangeLightsPosition();
  void ChangeSingleLightPosition(std::string light);
  void LoadDashboard();
  void Eyelashing();
};

#endif
