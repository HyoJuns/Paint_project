#include "easylogo_dialog.h"
#include "Singleton_Paint.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  easylogo_Dialog easy;

  easy.show();
  return a.exec();
}
