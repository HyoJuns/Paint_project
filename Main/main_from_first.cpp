#include "main_from_first.h"
#include "ui_main_from_first.h"

Main_From_First::Main_From_First(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::Main_From_First)
{
  ui->setupUi(this);
}

Main_From_First::~Main_From_First()
{
  delete ui;
}

