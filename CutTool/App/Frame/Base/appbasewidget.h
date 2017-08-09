#ifndef APPBASEWIDGET_H
#define APPBASEWIDGET_H
#include<QWidget>
#include<QKeyEvent>
class AppBaseWidget:public QWidget
{
public:
    AppBaseWidget(QWidget *parent=0);
    ~AppBaseWidget();
public:
    void initViews();
    void initListeners();
    void initData();
    //重写拖动事件
public:
    bool isDrag=false;
    QPoint m_position;
    void AppBaseWidget::mousePressEvent(QMouseEvent*);
    void AppBaseWidget::mouseReleaseEvent(QMouseEvent*);
    void AppBaseWidget::mouseMoveEvent(QMouseEvent*);
};

#endif // APPBASEWIDGET_H
