#ifndef PROJPROPDIALOG_H
#define PROJPROPDIALOG_H

#include <QDialog>

namespace Ui {
class ProjPropDialog;
}

class ProjPropDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProjPropDialog(QWidget *parent = nullptr);
    ~ProjPropDialog();

private:
    Ui::ProjPropDialog *ui;
};

#endif // PROJPROPDIALOG_H
