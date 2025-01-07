#include "page.h"
#include <QFont>

Page1::Page1(QWidget *parent)
{
    home = new Home;
    homeMainLay = new QHBoxLayout(this);
    homeMainLay->addWidget(home);
    setLayout(homeMainLay);
}

Page2::Page2(QWidget *parent)
{
    remoteMainLayout = new QHBoxLayout(this);
    remoteScrollArea = new QScrollArea(this);
    pWgt = new QWidget();
    remoteMainLayout->addWidget(new remotePC);
    pWgt->setLayout(remoteMainLayout);
    remoteScrollArea->setMinimumSize(480,560);
    remoteScrollArea->setWidget(pWgt);

}
Page3::Page3(QWidget *parent)
{
    setpage1 = new setPage1;
    setMainLayout = new QHBoxLayout();
    setTab = new QTabWidget();
    setTab->addTab(setpage1, QStringLiteral("小視窗設定"));
    setMainLayout->addWidget(setTab);
    setLayout(setMainLayout);
}

Page4::Page4(QWidget *parent)
{
    QFont *font = new QFont();
    font->setPointSize(12);
    infoMainLay = new QVBoxLayout(this);
    img.load(":/image/logo.png");
    inWin = new QLabel(this);
    inWin->setScaledContents(true);
    inWin->setPixmap(QPixmap::fromImage(img));
    inWin->setMaximumSize(100,100);
    infoSpacer = new QSpacerItem(300,300,QSizePolicy::Minimum, QSizePolicy::Fixed);
    information = new QLabel();
    information->setWordWrap(true);
    information->setText(QStringLiteral("We are students.\n"
                                        "We develop this application\nfor Windows Programming Course."));
    information->setFont(*font);
    infoMainLay->addWidget(inWin);
    infoMainLay->addWidget(information);
    infoMainLay->addItem(infoSpacer);
    setLayout(infoMainLay);
}
