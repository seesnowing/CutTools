#include "appbasewidget.h"

AppBaseWidget::AppBaseWidget(QWidget *parent):QWidget(parent){

}

AppBaseWidget::~AppBaseWidget(){

}

/**
 * @brief Widget::mousePressEvent
 * @param e
 * 目的是为了，支持在无边框下支持窗口拖动程序。
 */

void AppBaseWidget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        isDrag = true;
        m_position = e->globalPos() - this->pos();
        e->accept();
    }
}

void AppBaseWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(isDrag && (e->buttons() && Qt::LeftButton))
    {
        move(e->globalPos() - m_position);
        e->accept();
    }
}

void AppBaseWidget::mouseReleaseEvent(QMouseEvent *)
{
    isDrag = false;
}
