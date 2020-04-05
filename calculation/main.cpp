#include <QtGui/QApplication>
#include "QCalculateUI.h"
#include "QCalculatorDec.h"
#include <QDebug>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    int ret = -1;
//    QCalculateUI *cal = QCalculateUI::NewInstance();
//    if(cal != NULL)
//    {

//        cal->show();
//        ret = a.exec();
//        delete cal;
//    }

//    return ret;
    int ret = 0;
    QCalculatorDec dec;
    dec.expression("3+5*-8");
    qDebug() << dec.result();

    return ret;
}
