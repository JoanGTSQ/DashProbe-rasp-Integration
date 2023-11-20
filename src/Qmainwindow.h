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
#include <QTime>
#include <QTimer>

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr) : QMainWindow(parent), isRunning(false) {
    ui.setupUi(this);
    ui.tabWidget->setTabText(0, "Luz");
    ui.tabWidget->setTabText(1, "Tablero");
    ui.tabWidget->setTabText(2, "Ajustes");

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(UpdateTimer()));
    connect(ui.start, SIGNAL(clicked()), this, SLOT(StartButton_clicked()));
    connect(ui.stop, SIGNAL(clicked()), this, SLOT(StopButton_clicked()));
    connect(ui.reset, SIGNAL(clicked()), this, SLOT(ResetButton_clicked()));

    connect(ui.changeButtonLights, SIGNAL(clicked()), this, SLOT(ChangeSingleLight()));

    connect(ui.changeLightPositionTest, SIGNAL(clicked()), this,
            SLOT(printStatus()));
    connect(ui.loadSystemButton, SIGNAL(clicked()), this, SLOT(loadSystem()));
  }
  void setDash(Dashboard *extDash) { dash = extDash;}
  Ui::MainWindow ui;


public slots:
  void ChangeSingleLight();
  void StartButton_clicked();
  void StopButton_clicked();
  void ResetButton_clicked();
  void UpdateTimer();
  void printStatus() {
      dash->UpdateDataLights();
  }
  void loadSystem() { dash->Eyelashing(); }
private:
  QTimer *timer;
  QTime elapsedTime;
  bool isRunning;
public:
  Dashboard *dash;
};
