#include "dashboard/dashboard.hpp"
#include "ui_Qmainwindow.h"
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

    connect(ui.changeWindowButton, SIGNAL(clicked()), this, SLOT(cargarVentana()));

    ui.widget->setVisible(false);

    connect(ui.changeButtonLights, SIGNAL(clicked()), this, SLOT(changeSingleLight()));

    connect(ui.changeLightPositionTest, SIGNAL(clicked()), this,
            SLOT(printStatus()));
    connect(ui.loadSystemButton, SIGNAL(clicked()), this, SLOT(loadSystem()));
  }
  void setDash(Dashboard *extDash) { dash = extDash;}
  Ui::MainWindow ui;


public slots:
  void cargarVentana(){
    ui.frame->setVisible(false);
    ui.widget->setVisible(true);
  }
  void changeSingleLight() {
    if (ui.radioButtonLeftLight->isChecked()) {
      dash->ChangeSingleLightPosition("Left");
    } else if (ui.radioButtonTwoLights->isChecked()) {
      dash->ChangeLightsPosition();
    } else if (ui.radioButtonRightLight->isChecked()) {
      dash->ChangeSingleLightPosition("Right");
    }
  }
  void printStatus() { dash->UpdateDataLights(); }
  void loadSystem() { dash->Eyelashing(); }

public:
  Dashboard *dash;
};
