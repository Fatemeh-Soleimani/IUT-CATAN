#include "guide.h"
#include "ui_guide.h"
#include "catan2.h"

Guide::Guide(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guide)
{

    ui->setupUi(this);
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
}
void Guide::onBack()
{
    catan2 *c2=new catan2;
    c2->show();
    this->close();
}
Guide::~Guide()
{
    delete ui;
}
