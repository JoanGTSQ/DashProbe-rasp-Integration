#include "Qmainwindow.h"

int main(int argc, char *argv[]) {

  QApplication a(argc, argv);

  MainWindow w;
  Dashboard dash(&w.ui);
  w.setDash(&dash);
  w.show();

  return a.exec();
}
