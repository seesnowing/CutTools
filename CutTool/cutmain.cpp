#include "cutmain.h"
#include "ui_cutmain.h"

CutMain::CutMain(QWidget *parent):AppBaseWidget(parent),
    ui(new Ui::CutMain)
{
    ui->setupUi(this);
}

CutMain::~CutMain()
{
    delete ui;
}
