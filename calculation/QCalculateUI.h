#ifndef _QCALCULATEUI_H_
#define _QCALCULATEUI_H_

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

class QCalculateUI : public QWidget
{

private:
    QLineEdit *m_lineEdit;
    QPushButton *m_button[20];
    QCalculateUI();
    bool construct();
public:
    static QCalculateUI* NewInstance();
    void show();
    ~QCalculateUI();

    
};

#endif // QCALCULATEUI_H
