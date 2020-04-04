#include <QtGui/QApplication>
#include "QCalculateUI.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int ret = -1;
    QCalculateUI *cal = QCalculateUI::NewInstance();
    if(cal != NULL)
    {

        cal->show();
        ret = a.exec();
        delete cal;
    }

    return ret;
}
