#ifndef LAB_H
#define LAB_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLCDNumber>
#include <QGroupBox>
#include <QLineEdit>
#include <QTextBrowser>
#include <QSpacerItem>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QImage>
#include <QPixmap>
#include <QObject>

#include "page.h"

class Lab : public QWidget
{
    Q_OBJECT

public:
    Lab(QWidget *parent = 0);
    ~Lab();

    Page1 *page1;
    Page2 *page2;
    Page3 *page3;
    Page4 *page4;
private:

    QHBoxLayout     *mainLayout;
    QVBoxLayout     *leftLayout;
    QPushButton     *homeBtn;
    QPushButton     *remoteBtn;
    QPushButton     *setBtn;
    QPushButton     *infoBtn;
    QStackedWidget  *homeStk;
    QSpacerItem     *vSpacer;
    QLabel          *inWin;
    QImage          img;
private slots:
    void switchPage();
};
#endif // LAB_H
