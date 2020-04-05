#ifndef _QCALCULATEUI_H_
#define _QCALCULATEUI_H_

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include "ICalculator.h"

class QCalculateUI : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *m_lineEdit;
    QPushButton *m_button[20];
    QCalculateUI();
    bool construct();
    ICalculator *m_cal;
private slots:
    void onButtonClick();

public:
    static QCalculateUI* NewInstance();
    void show();
    void setCalculator(ICalculator *cal);
    ICalculator *getCalculator();
    ~QCalculateUI();

    
};

#endif // QCALCULATEUI_H
