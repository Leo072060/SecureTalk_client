#include "InteractiveWidget.h"
#include <QPropertyAnimation>
#include <QPropertyAnimation>

InteractiveWidget::InteractiveWidget(QWidget *parent)
    : QWidget(parent)
{
    // 设置暗黑风背景
    setStyleSheet("background-color:#2A2F3A; border-radius:8px;");

    // 设置透明度效果
    opacityEffect = new QGraphicsOpacityEffect(this);
    opacityEffect->setOpacity(leaveEventOpacity);
    setGraphicsEffect(opacityEffect);

    // 开启悬停事件
    setAttribute(Qt::WA_Hover, true);
}

void InteractiveWidget::enterEvent(QEnterEvent *event)
{
    // 鼠标进入动画
    QPropertyAnimation *anim = new QPropertyAnimation(opacityEffect, "opacity");
    anim->setDuration(200);
    anim->setEndValue(enterEventOpacity);  // 半透明
    anim->start(QAbstractAnimation::DeleteWhenStopped);

    QWidget::enterEvent(event);
}

void InteractiveWidget::leaveEvent(QEvent *event)
{
    // 鼠标离开恢复动画
    QPropertyAnimation *anim = new QPropertyAnimation(opacityEffect, "opacity");
    anim->setDuration(200);
    anim->setEndValue(leaveEventOpacity);  // 不透明
    anim->start(QAbstractAnimation::DeleteWhenStopped);

    QWidget::leaveEvent(event);
}
