#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtUI/projpropdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionproperty,SIGNAL(triggered()),this,SLOT(openProjProp()));
}

void MainWindow::openProjProp(){
    ProjPropDialog aaa;
    aaa.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
