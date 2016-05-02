/********************************************************************************
** Form generated from reading UI file 'redcircle.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDCIRCLE_H
#define UI_REDCIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedCircle
{
public:

    void setupUi(QWidget *RedCircle)
    {
        if (RedCircle->objectName().isEmpty())
            RedCircle->setObjectName(QStringLiteral("RedCircle"));
        RedCircle->resize(400, 300);

        retranslateUi(RedCircle);

        QMetaObject::connectSlotsByName(RedCircle);
    } // setupUi

    void retranslateUi(QWidget *RedCircle)
    {
        RedCircle->setWindowTitle(QApplication::translate("RedCircle", "RedCircle", 0));
    } // retranslateUi

};

namespace Ui {
    class RedCircle: public Ui_RedCircle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDCIRCLE_H
