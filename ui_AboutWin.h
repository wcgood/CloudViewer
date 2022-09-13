/********************************************************************************
** Form generated from reading UI file 'AboutWin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIN_H
#define UI_ABOUTWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWin
{
public:
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *AboutWin)
    {
        if (AboutWin->objectName().isEmpty())
            AboutWin->setObjectName(QString::fromUtf8("AboutWin"));
        AboutWin->resize(480, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutWin->sizePolicy().hasHeightForWidth());
        AboutWin->setSizePolicy(sizePolicy);
        AboutWin->setMinimumSize(QSize(480, 360));
        AboutWin->setMaximumSize(QSize(480, 360));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        AboutWin->setFont(font);
        AboutWin->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutWin->setWindowIcon(icon);
        label_2 = new QLabel(AboutWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 30, 241, 41));
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(AboutWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 100, 351, 221));

        retranslateUi(AboutWin);

        QMetaObject::connectSlotsByName(AboutWin);
    } // setupUi

    void retranslateUi(QWidget *AboutWin)
    {
        AboutWin->setWindowTitle(QCoreApplication::translate("AboutWin", "About CloudViewer", nullptr));
        label_2->setText(QCoreApplication::translate("AboutWin", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">CloutViewer PLUS</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AboutWin", "<html><head/><body><p><span style=\" font-size:12pt;\">Version 0.1</span></p><p><span style=\" font-size:12pt;\">Copyright(C) 2022 </span></p><p><span style=\" font-size:12pt;\">Wcgood\342\211\240wangcheng is very good</span></p><p><span style=\" font-size:12pt;\">Because he is invincible</span></p><p><span style=\" font-size:12pt;\">\347\234\213\345\210\260\344\270\255\346\226\207\357\274\214\346\210\221\345\260\261\350\265\242\344\272\206\357\274\201\350\275\254\347\240\201\345\276\210\350\276\233\350\213\246</span></p><p><br/></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWin: public Ui_AboutWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIN_H
