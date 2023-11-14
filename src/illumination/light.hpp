#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <QLabel>
#include <QWidget>
// #include <wiringPi.h>


class Light {
  const int SECONDS_EXECUTION = 0;
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

void Execute(int GPI, int Miliseconds);
