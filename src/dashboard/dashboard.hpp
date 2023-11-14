#include <vector>
#include "../illumination/light.hpp"
#include <iostream>
#include <thread>
#include "../../ui_mainwindow.h"  // Ajusta la ruta según la ubicación real de ui_mainwindow.h

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
