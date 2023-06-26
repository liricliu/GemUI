#include "projpropdialog.h"
#include "ui_projpropdialog.h"

ProjPropDialog::ProjPropDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjPropDialog)
{
    ui->setupUi(this);
    setFixedSize(size());
}

ProjPropDialog::~ProjPropDialog()
{
    delete ui;
}
