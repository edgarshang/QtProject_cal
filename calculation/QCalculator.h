#ifndef _QCALCULATOR_H_
#define _QCALCULATOR_H_

#include "QCalculateUI.h"
#include "QCalculatorDec.h"


class QCalculator
{
protected:
    QCalculatorDec m_cal;
    QCalculateUI *m_ui;

    QCalculator();
    bool construct();
public:
    static QCalculator* NewInstance();
    void show();
    ~QCalculator();
};

#endif // _QCALCULATOR_H_
