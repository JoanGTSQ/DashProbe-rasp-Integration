#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
// #include <wiringPi.h>


class Light {
  const int SECONDS_EXECUTION = 0;
  int GpiUp;
  int GpiDown;
  bool IsUp;
  std::string Position;
  const int MILISECONDEXECUTION = 1000;

public:
  Light(int GpiUp, int GpiDown, bool isUp, std::string Position);
  std::string ReturnStatus();
  void ChangePosition();
  bool GetPosition();
  std::string CheckWhereIsLight();
};

void Execute(int GPI, int Miliseconds);
