#include "mainwindow.h"

int main(int argc, char *argv[]) {

  QApplication a(argc, argv);

  MainWindow w;
  Dashboard dash(&w.ui);
  dash.SetUpDashboard();
  w.setDash(&dash);
  w.resize(400,400);
  w.show();

  return a.exec();
}
