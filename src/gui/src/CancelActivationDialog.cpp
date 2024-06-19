#include "CancelActivationDialog.h"
#include "ui_CancelActivationDialog.h"

CancelActivationDialog::CancelActivationDialog(QWidget *parent) :
    QDialog(parent, Qt::WindowCloseButtonHint),
    ui(new Ui::CancelActivationDialog)
{
    ui->setupUi(this);
}

CancelActivationDialog::~CancelActivationDialog()
{
    delete ui;
}
