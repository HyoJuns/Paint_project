#ifndef MAIN_FROM_FIRST_H
#define MAIN_FROM_FIRST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Main_From_First; }
QT_END_NAMESPACE

class Main_From_First : public QMainWindow
{
  Q_OBJECT

public:
  Main_From_First(QWidget *parent = nullptr);
  ~Main_From_First();

private:
  Ui::Main_From_First *ui;
};
#endif // MAIN_FROM_FIRST_H
