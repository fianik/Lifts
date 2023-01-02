#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include<QGraphicsView>
#include<QGraphicsScene>
#include<QGraphicsItem>

#include<QGraphicsRectItem>
#include<QGraphicsEllipseItem>
#include<QGraphicsLineItem>
#include<QGraphicsPixmapItem>

#include<QTimer>
#include<QPixmap>
#include<QHBoxLayout>
#include<QDebug>

#include <moveitem.h>

#include <QMainWindow>
#include <QList>
#include <QPropertyAnimation>
#include <QPushButton>
#include "math.h"
#include <QIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

// класс окна QWidget
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QGraphicsScene* scene;

     MoveItem *lift1 = new MoveItem();        // Создаём графический элемент
     MoveItem *lift2 = new MoveItem();        // Создаём графический элемент
     MoveItem *lift3 = new MoveItem();        // Создаём графический элемент
     MoveItem *lift4 = new MoveItem();        // Создаём графический элемент
     MoveItem *lift5 = new MoveItem();        // Создаём графический элемент

     void rearrangeButto();
     void rearrangeButto2();
       void rearrangeButto3();

       void rearrangeButto_naz_2();
       void rearrangeButto_naz_3();
      QPropertyAnimation *animation;
      QPropertyAnimation *animation1;

private slots:
\
     void on_Button4_1_clicked();
     void on_Button3_1_clicked();
     void on_Button2_1_clicked();
     void on_Button1_1_clicked();
     void on_Button5_1_clicked();

     void on_Button4_2_clicked();
     void on_Button3_2_clicked();
     void on_Button2_2_clicked();
     void on_Button1_2_clicked();
     void on_Button5_2_clicked();

     void on_Button4_3_clicked();
     void on_Button3_3_clicked();
     void on_Button2_3_clicked();
     void on_Button1_3_clicked();
     void on_Button5_3_clicked();

     void on_Button4_4_clicked();
     void on_Button3_4_clicked();
     void on_Button2_4_clicked();
     void on_Button1_4_clicked();
     void on_Button5_4_clicked();

     void on_Button4_5_clicked();
     void on_Button3_5_clicked();
     void on_Button2_5_clicked();
     void on_Button1_5_clicked();
     void on_Button5_5_clicked();

     void on_inside1_clicked();
     void on_inside2_clicked();
     void on_inside3_clicked();
     void on_inside4_clicked();
     void on_inside5_clicked();
     void on_inside_clicked();

     void on_textEdit_textChanged();

     void on_outside1_clicked();
     void on_outside2_clicked();
     void on_outside3_clicked();
     void on_outside4_clicked();
     void on_outside5_clicked();



     void on_textBrowser_textChanged();
     void on_textBrowser_2_textChanged();
     void on_textBrowser_3_textChanged();
     void on_textBrowser_4_textChanged();
     void on_textBrowser_5_textChanged();
     void on_pushButton_clicked();
     void on_btn_tech_2_clicked();
     void on_btn_tech_clicked();
};


#endif // WIDGET_H
