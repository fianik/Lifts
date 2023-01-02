#ifndef MOVEITEM_H
#define MOVEITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>
#include <QTimer>

class MoveItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit MoveItem(QObject *parent = 0);
    ~MoveItem();
    QTimer* timer=new QTimer;
    uint16_t x=0;
    uint16_t y=0;
    uint16_t required_position_x=0;
    uint16_t required_position_y=0;
    void init_item(uint16_t item_x,uint16_t item_y);

    int floor[5]
    {
        250,210,160,120,75
    };
    int position;
    void call_lift(uint8_t level);

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public slots:
   void updateTime();
};

#endif // MOVEITEM_H
