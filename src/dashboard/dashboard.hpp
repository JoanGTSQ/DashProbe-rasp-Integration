#ifndef DASHBOARDA_HPP
#define DASHBOARDA_HPP

#include <vector>
#include <iostream>
#include <thread>
#include "../illumination/light.hpp"
#include "../../ui_mainwindow.h"  // Ajusta la ruta según la ubicación real de ui_mainwindow.h
#include "../raspcom/raspcom.hpp"


class Dashboard {
  std::vector<Light> lights;
  Ui::MainWindow *ui;

public:
  Dashboard(Ui::MainWindow *ui);
  void UpdateDataLights();
  void ChangeLightsPosition();
  void ChangeSingleLightPosition(std::string light);
  void LoadDashboard();
};

#endif
