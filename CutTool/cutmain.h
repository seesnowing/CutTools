#ifndef CUTMAIN_H
#define CUTMAIN_H
#include <QWidget>
#include"App/Frame/Base/appbasewidget.h"
namespace Ui {
class CutMain;
}

class CutMain : public AppBaseWidget
{
    Q_OBJECT

public:
    explicit CutMain(QWidget *parent = 0);
    ~CutMain();

private:
    Ui::CutMain *ui;
};

#endif // CUTMAIN_H
