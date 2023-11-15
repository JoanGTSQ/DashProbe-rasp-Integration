#ifndef RASPCOM_HPP
#define RASPCOM_HPP

// #include <wiringPi.h>
#include <QLabel>
#include <QWidget>


class Raspberry{
    bool GPIList[27];
public:
    Raspberry();
    void IsConnected(QLabel *labe);
    void Execute(int GPI, int Miliseconds);
    bool AssignGPI(int GPI);
};

extern Raspberry Raspi;
#endif
