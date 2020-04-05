#include "QCalculator.h"

QCalculator::QCalculator()
{
}


QCalculator* QCalculator::NewInstance()
{
    QCalculator *ret = new QCalculator();

    if((ret == NULL) || !ret->construct())
    {
        delete ret;
        ret = NULL;
    }

    return ret;
}

bool QCalculator::construct()
{
    m_ui = QCalculateUI::NewInstance();

    if(m_ui != NULL)
    {
        m_ui->setCalculator(&m_cal);
    }

    return (m_ui != NULL);
}

void QCalculator::show()
{
    m_ui->show();
}
QCalculator::~QCalculator()
{
    delete m_ui;
}


