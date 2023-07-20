/********************************************************************************
** Form generated from reading UI file 'savedatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDATADIALOG_H
#define UI_SAVEDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SaveDataDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *SaveDataDialog)
    {
        if (SaveDataDialog->objectName().isEmpty())
            SaveDataDialog->setObjectName(QString::fromUtf8("SaveDataDialog"));
        SaveDataDialog->resize(387, 74);
        buttonBox = new QDialogButtonBox(SaveDataDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 40, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(SaveDataDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        lineEdit = new QLineEdit(SaveDataDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 10, 301, 21));

        retranslateUi(SaveDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveDataDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveDataDialog)
    {
        SaveDataDialog->setWindowTitle(QCoreApplication::translate("SaveDataDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SaveDataDialog", "savepath", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveDataDialog: public Ui_SaveDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDATADIALOG_H
