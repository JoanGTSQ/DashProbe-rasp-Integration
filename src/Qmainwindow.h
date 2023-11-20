#include "dashboard/dashboard.hpp"
#include "ui_Qmainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <iostream>
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QGraphicsView>

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
    ui.setupUi(this);
    ui.tabWidget->setTabText(0, "Luz");
    ui.tabWidget->setTabText(1, "Tablero");
    ui.tabWidget->setTabText(2, "Ajustes");



    connect(ui.changeButtonLights, SIGNAL(clicked()), this, SLOT(ChangeSingleLight()));

    connect(ui.changeLightPositionTest, SIGNAL(clicked()), this,
            SLOT(printStatus()));
    connect(ui.loadSystemButton, SIGNAL(clicked()), this, SLOT(loadSystem()));
  }
  void setDash(Dashboard *extDash) { dash = extDash;}
  Ui::MainWindow ui;


public slots:
  void ChangeSingleLight();
  void printStatus() {
      dash->UpdateDataLights();
      ui.line->setStyleSheet("transform: rotate(45deg);");
  }
  void loadSystem() { dash->Eyelashing(); }

public:
  Dashboard *dash;
};
