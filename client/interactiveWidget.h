#ifndef INTERACTIVEWIDGET_H
#define INTERACTIVEWIDGET_H

#include <QGraphicsDropShadowEffect>
#include <QGraphicsOpacityEffect>
#include <QWidget>

class InteractiveWidget : public QWidget
{
    Q_OBJECT
  public:
    explicit InteractiveWidget(QWidget *parent = nullptr);

  protected:
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;

  signals:

  private:
    QGraphicsOpacityEffect *opacityEffect;

  public:
    float enterEventOpacity = 1;
    float leaveEventOpacity = 0.7;
};

#endif // INTERACTIVEWIDGET_H
