#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <QLabel>
#include <QWidget>
#include "../raspcom/raspcom.hpp"
// #include <wiringPi.h>


class Light {
  const int SECONDS_EXECUTION = 2;
  int GpiUp;
  int GpiDown;
  bool IsUp;
  std::string Position;
  QLabel *Label;
  const int MILISECONDEXECUTION = 1000;

public:


  Light(int GpiUp, int GpiDown, bool isUp, std::string Position, QLabel *labe);
  std::string ReturnStatus();
  void ChangePosition();
  void UpdateLabels();
  bool GetPosition();
  std::string CheckWhereIsLight();
};


#endif
