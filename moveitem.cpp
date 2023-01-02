#include "moveitem.h"
#include <QThread>

MoveItem::MoveItem(QObject *parent) :
    QObject(parent), QGraphicsItem()
{
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->setInterval(40);
    timer->start();
}

MoveItem::~MoveItem()
{

}

void MoveItem::init_item(uint16_t item_x,uint16_t item_y)
{
    x=item_x;
    y=item_y;
    required_position_x=item_x;
    required_position_y=item_y;
    this->setPos(item_x,item_y);
}

QRectF MoveItem::boundingRect() const
{
    return QRectF (-30,-30,50,40);
}

void MoveItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::gray);
    painter->drawRect(-30,-30,50,40);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void MoveItem::updateTime()
{
        if (y<required_position_y)
        {
            y++;
            position=-1; //лифт опускается
        }
        else if(y>required_position_y)
        {
             y--;
             position=1; //лифт поднимается
        }
        else if(y==required_position_y)
        {
             position=0; //лифт стоит на месте
        }
        this->setPos(x,y);
        //qDebug()<<position;
}

void MoveItem::call_lift(uint8_t level)
{
    if(((position==-1)&&(required_position_y>floor[level-1])&&(floor[level-1]>y))||((position==1)&&(required_position_y<floor[level-1])&&(floor[level-1]<y))||(position==0)) // если опускается или поднимается
    {
    required_position_y=floor[level-1];
    }
}
