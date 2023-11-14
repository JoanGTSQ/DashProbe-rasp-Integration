#include "dashboard/dashboard.hpp"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <iostream>

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
    ui.setupUi(this);

    connect(ui.pushButton2, SIGNAL(clicked()), this, SLOT(changeSingleLight()));

    connect(ui.changeLightPositionTest, SIGNAL(clicked()), this,
            SLOT(printStatus()));
    connect(ui.loadSystemButton, SIGNAL(clicked()), this, SLOT(loadSystem()));
  }
  // Establecer el objeto desde el exterior
  void setDash(Dashboard *extdash) { dash = extdash; }
  Ui::MainWindow ui;

public slots:
  void changeSingleLight() {
    if (ui.radioButtonOption1->isChecked()) {
      dash->ChangeSingleLightPosition("Left");
    } else if (ui.radioButtonOption2->isChecked()) {
      dash->ChangeLightsPosition();
    } else if (ui.radioButtonOption3->isChecked()) {
      dash->ChangeSingleLightPosition("Right");
    }
  }
  void printStatus() { dash->UpdateDataLights(); }
  void loadSystem() { dash->LoadDashboard(); }

public:
  Dashboard *dash;
};
