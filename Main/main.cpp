#include "main_from_first.h"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Main_From_First w;
  w.show();
  return a.exec();
}
