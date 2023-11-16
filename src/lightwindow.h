#include "dashboard/dashboard.hpp"
#include "ui_lightwindow.h"
#include <QApplication>
#include <QDebug>
#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <iostream>

class LightWindow : public QMainWindow{
  Q_OBJECT

public:
  LightWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
    ui.setupUi(this);


  }


  Ui::LightWindow ui;

public slots:


public:
};
