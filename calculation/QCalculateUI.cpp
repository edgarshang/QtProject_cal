#include "QCalculateUI.h"

QCalculateUI::QCalculateUI():QWidget(NULL, Qt::WindowCloseButtonHint)
{

}

QCalculateUI::~QCalculateUI()
{

}
bool QCalculateUI::construct()
{
    bool ret = true;
    const char *butex[20] = {
        "7", "8", "9", "+", "(",
        "4", "5", "6", "-", ")",
        "1", "2", "3", "*", "<-",
        "0", ".", "=", "/", "C"
    };

    m_lineEdit = new QLineEdit(this);
    if(m_lineEdit == NULL)
    {
        ret = false;
        return ret;
    }
    m_lineEdit->move(10, 10);
    m_lineEdit->resize(240, 30);
    m_lineEdit->setReadOnly(true);

    for(int i = 0;  i < 4; i++){
        for(int j = 0; j < 5; j++){
            m_button[i*5 + j] = new QPushButton(this);
            if(m_button[i*5 + j] == NULL)
            {
                ret = false;
                return ret;
            }
            m_button[i*5 + j]->resize(40, 40);
            m_button[i*5 + j]->move(10 + (10 + 40)*j, 50 + (40+10)*i);
            m_button[i*5 + j]->setText(butex[i*5 + j]);
        }
    }


    return ret;
}

void QCalculateUI::show()
{
    QWidget::show();
    setFixedSize(width(), height());
}

QCalculateUI* QCalculateUI::NewInstance()
{
    QCalculateUI* ret = new QCalculateUI();
    if((ret == NULL) || !ret->construct())
    {
        delete ret;
        ret = NULL;
    }

    return ret;
}
