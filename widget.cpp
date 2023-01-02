#include "widget.h"
#include "ui_widget.h"

//конструктор виджета
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //создание картинки
    ui->setupUi(this);
    QPixmap pix(":/resources/img/img.jpg");

    //рисунок на сцене
    QGraphicsScene *scene = new QGraphicsScene;
    scene->addPixmap(pix);
    ui->graphicsView->setScene(scene);
    scene->addItem(lift1);   // Добавляем элемент на графическую сцену
    lift1->init_item(125,75);

    scene->addItem(lift2);   // Добавляем элемент на графическую сцену
    lift2->init_item(294,250);

    scene->addItem(lift3);   // Добавляем элемент на графическую сцену
    lift3->init_item(540,75);

    scene->addItem(lift4);   // Добавляем элемент на графическую сцену
    lift4->init_item(661,160);

    scene->addItem(lift5);   // Добавляем элемент на графическую сцену
    lift5->init_item(787,120);

    Widget::ui-> btn_tech->setIcon(QIcon(":/resources/img/support.png"));
    Widget::ui-> btn_tech->setIconSize(QSize(70,70));
    Widget::ui-> btn_tech_2->setIcon(QIcon(":/resources/img/support.png"));
    Widget::ui-> btn_tech_2->setIconSize(QSize(70,70));
    Widget::ui-> pushButton_2->setIcon(QIcon(":/resources/img/6nz.gif"));
    Widget::ui-> pushButton_2->setIconSize(QSize(70,70));
    ui->btn_tech->hide();
    ui->btn_tech_2->hide();

}

//деструктор виджета
Widget::~Widget()
{
    delete ui;
}

int n = 1;
int y01 = 0, y02 = 0, y03 = 0, y04 = 0, y05 = 0, x01 = 125, x02 = 294, x03 = 540, x04 = 661, x05 = 787;

QString A = "0", B = "0", C = "0", D = "0", E = "0";

// Кнопки вызова для лифтов (1 лифт)

void Widget::on_Button5_1_clicked()
{   y01=1;
    if (A != "7" & A != "8" & A != "9" & A != "10" & A != " ")
    lift1->call_lift(5);

}

void Widget::on_Button4_1_clicked()
{
    if (A != "7" & A != "8" & A != "9" & A != "10" & A != " ")
    lift1->call_lift(4);
    y01=1;
}

void Widget::on_Button3_1_clicked()
{   y01=1;
    if (A != "7" & A != "8" & A != "9" & A != "10" & A != " ")
    lift1->call_lift(3);

}

void Widget::on_Button2_1_clicked()
{   y01=1;
    if (A != "7" & A != "8" & A != "9" & A != "10" & A != " ")
    lift1->call_lift(2);

}

void Widget::on_Button1_1_clicked()
{   y01=1;
    if (A != "7" & A != "8" & A != "9" & A != "10" & A != " ")
    lift1->call_lift(1);

}

// Кнопки вызова для лифтов (2 лифт)

void Widget::on_Button5_2_clicked()
{   y02=1;
    if (B != "7" & B != "8" & B != "9" & B != "10" & B != " ")
    lift2->call_lift(5);

}

void Widget::on_Button4_2_clicked()
{
    if (B != "7" & B != "8" & B != "9" & B != "10" & B != " ")
    lift2->call_lift(4);
    y02=1;
}

void Widget::on_Button3_2_clicked()
{
    if (B != "7" & B != "8" & B != "9" & B != "10" & B != " ")
    lift2->call_lift(3);
    y02=1;
}

void Widget::on_Button2_2_clicked()
{
    if (B != "7" & B != "8" & B != "9" & B != "10" & B != " ")
    lift2->call_lift(2);
    y02=1;
}

void Widget::on_Button1_2_clicked()
{   y02=1;
    if (B != "7" & B != "8" & B != "9" & B != "10" & B != " ")
    lift2->call_lift(1);

}

// Кнопки вызова для лифтов (3 лифт)

void Widget::on_Button5_3_clicked()
{
    y03=1;
    if (C != "7" & C != "8" & C != "9" & C != "10" & C != " ")
    lift3->call_lift(5);
}

void Widget::on_Button4_3_clicked()
{   y03=1;
    if (C != "7" & C != "8" & C != "9" & C != "10" & C != " ")
    lift3->call_lift(4);

}

void Widget::on_Button3_3_clicked()
{   y03=1;
    if (C != "7" & C != "8" & C != "9" & C != "10" & C != " ")
    lift3->call_lift(3);

}

void Widget::on_Button2_3_clicked()
{   y03=1;
    if (C != "7" & C != "8" & C != "9" & C != "10" & C != " ")
    lift3->call_lift(2);

}

void Widget::on_Button1_3_clicked()
{   y03=1;
    if (C != "7" & C != "8" & C != "9" & C != "10" & C != " ")
    lift3->call_lift(1);

}

// Кнопки вызова для лифтов (4 лифт)

void Widget::on_Button5_4_clicked()
{
    if (D != "7" & D != "8" & D != "9" & D != "10" & D != " ")
    lift4->call_lift(5);
    y04=1;
}

void Widget::on_Button4_4_clicked()
{
    if (D != "7" & D != "8" & D != "9" & D != "10" & D != " ")
    lift4->call_lift(4);
    y04=1;
}

void Widget::on_Button3_4_clicked()
{
    if (D != "7" & D != "8" & D != "9" & D != "10" & D != " ")
    lift4->call_lift(3);
    y04=1;
}

void Widget::on_Button2_4_clicked()
{
    if (D != "7" & D != "8" & D != "9" & D != "10" & D != " ")
    lift4->call_lift(2);
    y04=1;
}

void Widget::on_Button1_4_clicked()
{
    if (D != "7" & D != "8" & D != "9" & D != "10" & D != " ")
    lift4->call_lift(1);
    y04=1;
}

// Кнопки вызова для лифтов (5 лифт)

void Widget::on_Button5_5_clicked()
{   y05=1;
    if (E != "7" & E != "8" & E != "9" & E != "10" & E != " ")
    lift5->call_lift(5);

}

void Widget::on_Button4_5_clicked()
{   y05=1;
    if (E != "7" & E != "8" & E != "9" & E != "10" & E != " ")
    lift5->call_lift(4);

}

void Widget::on_Button3_5_clicked()
{   y05=1;
    if (E != "7" & E != "8" & E != "9" & E != "10" & E != " ")
    lift5->call_lift(3);

}

void Widget::on_Button2_5_clicked()
{   y05=1;
    if (E != "7" & E != "8" & E != "9" & E != "10" & E != " ")
    lift5->call_lift(2);

}

void Widget::on_Button1_5_clicked()
{   y05=1;
    if (E != "7" & E != "8" & E != "9" & E != "10" & E != " ")
    lift5->call_lift(1);

}




void Widget::on_inside1_clicked()         // внутренняя панель лифта (1)
{
    switch (n)
    {
    case 1:
    {
        if (A != " " & A != "0")
        lift1->required_position_y=250;
        break;
    }
    case 2:
    {
        if (B != " " & B != "0")
        lift2->required_position_y=250;
        break;
    }
    case 3:
    {
        if (C != " " & C != "0")
        lift3->required_position_y=250;
        break;
    }
    case 4:
    {
        if (D != " " & D != "0")
        lift4->required_position_y=250;
        break;
    }
    case 5:
    {
        if (E != " " & E != "0")
        lift5->required_position_y=250;
        break;
    }
    }
}

void Widget::on_inside2_clicked()         // внутренняя панель лифта (2)
{
    switch (n)
    {
    case 1:
    {
        if (A != " " & A != "0")
        lift1->required_position_y=210;
        break;
    }
    case 2:
    {
        if (B != " " & B != "0")
        lift2->required_position_y=210;
        break;
    }
    case 3:
    {
        if (C != " " & C != "0")
        lift3->required_position_y=210;
        break;
    }
    case 4:
    {
        if (D != " " & D != "0")
        lift4->required_position_y=210;
        break;
    }
    case 5:
    {
        if (E != " " & E != "0")
        lift5->required_position_y=210;
        break;
    }
    }
}

void Widget::on_inside3_clicked()         // внутренняя панель лифта (3)
{
    switch (n)
    {
    case 1:
    {
        if (A != " " & A != "0")
        lift1->required_position_y=160;
        break;
    }
    case 2:
    {
        if (B != " " & B != "0")
        lift2->required_position_y=160;
        break;
    }
    case 3:
    {
        if (C != " " & C != "0")
        lift3->required_position_y=160;
        break;
    }
    case 4:
    {
        if (D != " " & D != "0")
        lift4->required_position_y=160;
        break;
    }
    case 5:
    {
        if (E != " " & E != "0")
        lift5->required_position_y=160;
        break;
    }
    }
}

void Widget::on_inside4_clicked()         // внутренняя панель лифта (4)
{
        switch (n)
        {
        case 1:
        {
            if (A != " " & A != "0")
            lift1->required_position_y=120;
            break;
        }
        case 2:
        {
            if (B != " " & B != "0")
            lift2->required_position_y=120;
            break;
        }
        case 3:
        {
            if (C != " " & C != "0")
            lift3->required_position_y=120;
            break;
        }
        case 4:
        {
            if (D != " " & D != "0")
            lift4->required_position_y=120;
            break;
        }
        case 5:
        {
            if (E != " " & E != "0")
            lift5->required_position_y=120;
            break;
        }
        }
}

void Widget::on_inside5_clicked()        // внутренняя панель лифта (5)
{
    switch (n)
    {
    case 1:
    {
        if (A != " " & A != "0")
        lift1->required_position_y=75;
        break;
    }
    case 2:
    {
        if (B != " " & B != "0")
        lift2->required_position_y=75;
        break;
    }
    case 3:
    {
        if (C != " " & C != "0")
        lift3->required_position_y=75;
        break;
    }
    case 4:
    {
        if (D != " " & D != "0")
        lift4->required_position_y=75;
        break;
    }
    case 5:
    {
        if (E != " " & E != "0")
        lift5->required_position_y=75;
        break;
    }
    }
}

void Widget::on_textEdit_textChanged()         // внутренняя панель лифта (люди)
{

}


void Widget::on_outside1_clicked()          // выбор лифта (1)
{
    n = 1;
    y01=1;
}

void Widget::on_outside2_clicked()        // выбор лифта (2)
{
     n = 2;
     y02=1;
}

void Widget::on_outside3_clicked()        // выбор лифта (3)
{
     n = 3;
     y03=1;
}

void Widget::on_outside4_clicked()        // выбор лифта (4)
{
     n = 4;
     y04=1;
}

void Widget::on_outside5_clicked()        // выбор лифта (5)
{
     n = 5;
     y05=1;
}

int flag_brig=0;
int flag_brig_vid=0;

void Widget::on_inside_clicked()       // Отправка кол-ва человек в лифте
{
   if (n == 1)
   {
       ui->textBrowser->clear();
   A = ui->textEdit->toPlainText();
   if (A != "1" & A !="2" & A != "3" & A != "4" & A != "5" & A != "6" & A != "7" & A != "8" & A != "9" & A != "10" & A != "0" & A!="")
   {
      A = " ";
   }

   ui->textBrowser->insertPlainText(A);
   }




// 2 лифт
   if (n == 2)
   {
       ui->textBrowser_2->clear();
   B = ui->textEdit->toPlainText();

   if (B != "1" & B !="2" & B != "3" & B != "4" & B != "5" & B != "6" & B != "7" & B != "8" & B != "9" & B != "10" & B != "0" & B!="" )
   {
       B = " ";
   }

   ui->textBrowser_2->insertPlainText(B);

   }
   //555555566666
   if(y01==1||y02==1)
    {
       if ((A != "1" & A !="2" & A != "3" & A != "4" & A != "5" & A != "6" & A != "7" & A != "8" & A != "9" & A != "10" & A != "0" & A!="")||(B != "1" & B !="2" & B != "3" & B != "4" & B != "5" & B != "6" & B != "7" & B != "8" & B != "9" & B != "10" & B != "0"  & B!="")||(C != "1" & C !="2" & C != "3" & C != "4" & C != "5" & C != "6" & C != "7" & C != "8" & C != "9" & C != "10" & C != "0"  & C!="")||(D != "1" & D !="2" & D != "3" & D != "4" & D != "5" & D != "6" & D != "7" & D != "8" & D != "9" & D != "10" & D != "0" & D!="")||(E != "1" & E !="2" & E != "3" & E != "4" & E != "5" & E != "6" & E != "7" & E != "8" & E != "9" & E != "10" & E != "0"  & E!=""))
       {  ui->btn_tech_2->show();
           rearrangeButto2();
           flag_brig=1;
        }


    }

   if(y01==1||y02==1)
    {

       if ((A != "1" & A !="2" & A != "3" & A != "4" & A != "5" & A != "6" & A != "7" & A != "8" & A != "9" & A != "10" & A != "0" & A!="")||(B != "1" & B !="2" & B != "3" & B != "4" & B != "5" & B != "6" & B != "7" & B != "8" & B != "9" & B != "10" & B != "0"  & B!="")||(C != "1" & C !="2" & C != "3" & C != "4" & C != "5" & C != "6" & C != "7" & C != "8" & C != "9" & C != "10" & C != "0"  & C!="")||(D != "1" & D !="2" & D != "3" & D != "4" & D != "5" & D != "6" & D != "7" & D != "8" & D != "9" & D != "10" & D != "0" & D!="")||(E != "1" & E !="2" & E != "3" & E != "4" & E != "5" & E != "6" & E != "7" & E != "8" & E != "9" & E != "10" & E != "0"  & E!=""))
       {
       if (y01==1)
       {   ui->textBrowser->clear();
           A="0";

           qDebug()<<A;
           ui->textBrowser->insertPlainText(A);
       }
       if (y02==1)
       {
           ui->textBrowser_2->clear();
           B="0";

           qDebug()<<B;
            ui->textBrowser_2->insertPlainText(B);
           }
       }

           y01=0;
           y02=0;

    }




  //3 лифт
   if (n == 3)
   {
       ui->textBrowser_3->clear();
   C = ui->textEdit->toPlainText();
   if (C != "1" & C !="2" & C != "3" & C != "4" & C != "5" & C != "6" & C != "7" & C != "8" & C != "9" & C != "10" & C != "0"  & C!="")
   {
       C = " ";

  }


   ui->textBrowser_3->insertPlainText(C);

   }
//4 лифт
   if (n == 4)
   {
       ui->textBrowser_4->clear();
   D = ui->textEdit->toPlainText();
   if (D != "1" & D !="2" & D != "3" & D != "4" & D != "5" & D != "6" & D != "7" & D != "8" & D != "9" & D != "10" & D != "0"  & D!="")
   {
       D = " ";
   }


   ui->textBrowser_4->insertPlainText(D);
   }
//5лифт
   if (n == 5)
   {
       ui->textBrowser_5->clear();
   E = ui->textEdit->toPlainText();
   if (E != "1" & E !="2" & E != "3" & E != "4" & E != "5" & E != "6" & E != "7" & E != "8" & E != "9" & E != "10" & E != "0"  & E!="")
   {
       E = " ";
   }
      ui->textBrowser_5->insertPlainText(E);
      }

 //555556666
if(y03==1||y04==1||y05==1)
 {
    if ((B != "1" & B !="2" & B != "3" & B != "4" & B != "5" & B != "6" & B != "7" & B != "8" & B != "9" & B != "10" & B != "0"  & B!="")||(A != "1" & A !="2" & A != "3" & A != "4" & A != "5" & A != "6" & A != "7" & A != "8" & A != "9" & A != "10" & A != "0"  & A!="")||(C != "1" & C !="2" & C != "3" & C != "4" & C != "5" & C != "6" & C != "7" & C != "8" & C != "9" & C != "10" & C != "0"  & C!="")||(D != "1" & D !="2" & D != "3" & D != "4" & D != "5" & D != "6" & D != "7" & D != "8" & D != "9" & D != "10" & D != "0" & D!="")||(E != "1" & E !="2" & E != "3" & E != "4" & E != "5" & E != "6" & E != "7" & E != "8" & E != "9" & E != "10" & E != "0"  & E!=""))
    {  ui->btn_tech->show();
        rearrangeButto3();
        flag_brig=1;
    }

}

if(y03==1||y04==1||y05==1)
 {

    if ((A != "1" & A !="2" & A != "3" & A != "4" & A != "5" & A != "6" & A != "7" & A != "8" & A != "9" & A != "10" & A != "0" & A!="")||(B != "1" & B !="2" & B != "3" & B != "4" & B != "5" & B != "6" & B != "7" & B != "8" & B != "9" & B != "10" & B != "0"  & B!="")||(C != "1" & C !="2" & C != "3" & C != "4" & C != "5" & C != "6" & C != "7" & C != "8" & C != "9" & C != "10" & C != "0"  & C!="")||(D != "1" & D !="2" & D != "3" & D != "4" & D != "5" & D != "6" & D != "7" & D != "8" & D != "9" & D != "10" & D != "0" & D!="")||(E != "1" & E !="2" & E != "3" & E != "4" & E != "5" & E != "6" & E != "7" & E != "8" & E != "9" & E != "10" & E != "0"  & E!=""))
    {
    if (y03==1)
    {   ui->textBrowser_3->clear();
        C="0";

        qDebug()<<C;
        ui->textBrowser_3->insertPlainText(A);
    }
    if (y04==1)
    {
        ui->textBrowser_4->clear();
        D="0";

        qDebug()<<D;
         ui->textBrowser_4->insertPlainText(B);
        }
    if (y05==1)
    {
        ui->textBrowser_5->clear();
        E="0";

        qDebug()<<E;
         ui->textBrowser_5->insertPlainText(B);
        }
    }

    y03=0;
    y04=0;
    y05=0;

 }


ui->textEdit->clear();
}


   void Widget::on_textBrowser_textChanged()
   {

   }



   void Widget::on_textBrowser_2_textChanged()
   {

   }

   void Widget::on_textBrowser_3_textChanged()
   {

   }

   void Widget::on_textBrowser_4_textChanged()
   {

   }

   void Widget::on_textBrowser_5_textChanged()
   {

   }


//это для дома№1
void Widget::rearrangeButto2()
{  // int buttonCount = buttonList.size();
    //float angleUnit = 100/ buttonCount;

   //for(int i = 0; i< buttonCount; i++ )

    animation = new QPropertyAnimation(ui->btn_tech_2,"geometry");

     animation->setDuration(2500);
     animation->setStartValue(QRectF(400,400,64,64));
     animation->setEasingCurve(QEasingCurve::OutCurve);
     animation->setEndValue(QRectF(220,300,64,64));
     animation->start();

     //  buttonCount=0;

}
//это для дома№2
void Widget::rearrangeButto3()
{
      animation1 = new QPropertyAnimation(ui->btn_tech,"geometry");

       animation1->setDuration(1400);
       animation1->setStartValue(QRectF(590,400,64,64));
       animation1->setEasingCurve(QEasingCurve::Linear);
       animation1->setEndValue(QRectF(590,300,64,64));
       animation1->start();


}
//это для дома№1

void Widget::rearrangeButto_naz_2()
{
    animation = new QPropertyAnimation(ui->btn_tech_2,"geometry");

     animation->setDuration(2500);
     animation->setStartValue(QRectF(220,300,64,64));
     animation->setEasingCurve(QEasingCurve::OutCurve);
     animation->setEndValue(QRectF(400,400,64,64));
     animation->start();

  //   if(flag_brig==1)
  //   {
  //    ui->btn_tech_2->hide();
   //  }
}
void Widget::rearrangeButto_naz_3()
{
    animation = new QPropertyAnimation(ui->btn_tech,"geometry");

     animation->setDuration(2500);
     animation->setStartValue(QRectF(590,300,64,64));
     animation->setEasingCurve(QEasingCurve::OutCurve);
     animation->setEndValue(QRectF(590,400,64,64));
     animation->start();

  //   if(flag_brig==1)
  //   {
  //    ui->btn_tech_2->hide();
   //  }
}
void Widget::on_pushButton_clicked()
{
    rearrangeButto_naz_2();
    rearrangeButto_naz_3();
}

void Widget::on_btn_tech_2_clicked()
{
    ui->btn_tech_2->hide();
}

void Widget::on_btn_tech_clicked()
{
    ui->btn_tech->hide();
    ui->btn_tech_2->hide();
}
