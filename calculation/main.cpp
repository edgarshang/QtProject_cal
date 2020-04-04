#include <QtGui/QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w = new QWidget(0, Qt::WindowCloseButtonHint);
    QLineEdit *l = new QLineEdit(w);
    QPushButton *button[20]  = {0};
    const char *butex[20] = {
        "7", "8", "9", "+", "(",
        "4", "5", "6", "-", ")",
        "1", "2", "3", "*", "<-",
        "0", ".", "=", "/", "C"
    };

    l->move(10, 10);
    l->resize(240, 30);
    l->setReadOnly(true);
    int ret = 0;

    for(int i = 0;  i < 4; i++){
        for(int j = 0; j < 5; j++){
            button[i*5 + j] = new QPushButton(w);
            button[i*5 + j]->resize(40, 40);
            button[i*5 + j]->move(10 + (10 + 40)*j, 50 + (40+10)*i);
            button[i*5 + j]->setText(butex[i*5 + j]);
        }
    }

    w->setFixedSize(260, 250);
    w->show();
    
    ret = a.exec();
    delete w;
    return ret;
}
