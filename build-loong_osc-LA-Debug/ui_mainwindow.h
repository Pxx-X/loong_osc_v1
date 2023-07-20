/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QChartView *chartview;
    QPushButton *convert;
    QLabel *volt_mag;
    QLabel *time_mag;
    QPushButton *save;
    QPushButton *trigger;
    QPushButton *load;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *time_mag_add;
    QPushButton *time_offset_add;
    QPushButton *time_offset_sub;
    QPushButton *time_mag_sub;
    QPushButton *volt_offset_add;
    QPushButton *volt_mag_sub_2;
    QPushButton *volt_mag_sub;
    QPushButton *volt_mag_add;
    QLabel *frequency;
    QLabel *max_value;
    QLabel *min_value;
    QPushButton *trigger_add;
    QPushButton *trigger_sub;
    QPushButton *testopenT;
    QPushButton *testcloseT;
    QLabel *CursorVolt1;
    QFrame *TG_line;
    QPushButton *Cursor;
    QPushButton *cursor_sub;
    QPushButton *cursor_add;
    QFrame *cursor_line1;
    QFrame *cursor_line2;
    QLabel *CursorVolt2;
    QLabel *CursorTime;
    QLabel *T1;
    QLabel *T2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chartview = new QChartView(centralwidget);
        chartview->setObjectName(QString::fromUtf8("chartview"));
        chartview->setGeometry(QRect(-60, -40, 700, 500));
        chartview->setStyleSheet(QString::fromUtf8(""));
        chartview->setFrameShadow(QFrame::Plain);
        convert = new QPushButton(centralwidget);
        convert->setObjectName(QString::fromUtf8("convert"));
        convert->setGeometry(QRect(600, 455, 150, 45));
        volt_mag = new QLabel(centralwidget);
        volt_mag->setObjectName(QString::fromUtf8("volt_mag"));
        volt_mag->setGeometry(QRect(0, 410, 151, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        volt_mag->setFont(font);
        time_mag = new QLabel(centralwidget);
        time_mag->setObjectName(QString::fromUtf8("time_mag"));
        time_mag->setGeometry(QRect(0, 440, 151, 31));
        time_mag->setFont(font);
        save = new QPushButton(centralwidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(600, 330, 75, 61));
        trigger = new QPushButton(centralwidget);
        trigger->setObjectName(QString::fromUtf8("trigger"));
        trigger->setGeometry(QRect(600, 400, 75, 45));
        QFont font1;
        font1.setPointSize(9);
        trigger->setFont(font1);
        load = new QPushButton(centralwidget);
        load->setObjectName(QString::fromUtf8("load"));
        load->setGeometry(QRect(675, 330, 75, 61));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, -5, 111, 31));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(650, 105, 111, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(620, 158, 51, 31));
        QFont font3;
        font3.setPointSize(8);
        label_5->setFont(font3);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(690, 158, 111, 31));
        label_6->setFont(font3);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(690, 48, 111, 31));
        label_7->setFont(font3);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(620, 48, 51, 31));
        label_8->setFont(font3);
        time_mag_add = new QPushButton(centralwidget);
        time_mag_add->setObjectName(QString::fromUtf8("time_mag_add"));
        time_mag_add->setGeometry(QRect(600, 130, 75, 40));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        time_mag_add->setFont(font4);
        time_offset_add = new QPushButton(centralwidget);
        time_offset_add->setObjectName(QString::fromUtf8("time_offset_add"));
        time_offset_add->setGeometry(QRect(675, 130, 75, 40));
        time_offset_add->setFont(font4);
        time_offset_sub = new QPushButton(centralwidget);
        time_offset_sub->setObjectName(QString::fromUtf8("time_offset_sub"));
        time_offset_sub->setGeometry(QRect(675, 180, 75, 40));
        QFont font5;
        font5.setPointSize(17);
        time_offset_sub->setFont(font5);
        time_mag_sub = new QPushButton(centralwidget);
        time_mag_sub->setObjectName(QString::fromUtf8("time_mag_sub"));
        time_mag_sub->setGeometry(QRect(600, 180, 75, 40));
        time_mag_sub->setFont(font5);
        volt_offset_add = new QPushButton(centralwidget);
        volt_offset_add->setObjectName(QString::fromUtf8("volt_offset_add"));
        volt_offset_add->setGeometry(QRect(675, 20, 75, 40));
        volt_offset_add->setFont(font4);
        volt_mag_sub_2 = new QPushButton(centralwidget);
        volt_mag_sub_2->setObjectName(QString::fromUtf8("volt_mag_sub_2"));
        volt_mag_sub_2->setGeometry(QRect(675, 70, 75, 40));
        volt_mag_sub_2->setFont(font5);
        volt_mag_sub = new QPushButton(centralwidget);
        volt_mag_sub->setObjectName(QString::fromUtf8("volt_mag_sub"));
        volt_mag_sub->setGeometry(QRect(600, 70, 75, 40));
        volt_mag_sub->setFont(font5);
        volt_mag_add = new QPushButton(centralwidget);
        volt_mag_add->setObjectName(QString::fromUtf8("volt_mag_add"));
        volt_mag_add->setGeometry(QRect(600, 20, 75, 40));
        volt_mag_add->setFont(font4);
        frequency = new QLabel(centralwidget);
        frequency->setObjectName(QString::fromUtf8("frequency"));
        frequency->setGeometry(QRect(0, 470, 171, 31));
        frequency->setFont(font);
        max_value = new QLabel(centralwidget);
        max_value->setObjectName(QString::fromUtf8("max_value"));
        max_value->setGeometry(QRect(140, 410, 171, 31));
        max_value->setFont(font);
        min_value = new QLabel(centralwidget);
        min_value->setObjectName(QString::fromUtf8("min_value"));
        min_value->setGeometry(QRect(140, 440, 181, 31));
        min_value->setFont(font);
        trigger_add = new QPushButton(centralwidget);
        trigger_add->setObjectName(QString::fromUtf8("trigger_add"));
        trigger_add->setGeometry(QRect(675, 400, 37, 45));
        trigger_add->setFont(font4);
        trigger_sub = new QPushButton(centralwidget);
        trigger_sub->setObjectName(QString::fromUtf8("trigger_sub"));
        trigger_sub->setGeometry(QRect(713, 400, 37, 45));
        trigger_sub->setFont(font5);
        testopenT = new QPushButton(centralwidget);
        testopenT->setObjectName(QString::fromUtf8("testopenT"));
        testopenT->setEnabled(true);
        testopenT->setGeometry(QRect(510, 450, 80, 23));
        testcloseT = new QPushButton(centralwidget);
        testcloseT->setObjectName(QString::fromUtf8("testcloseT"));
        testcloseT->setEnabled(true);
        testcloseT->setGeometry(QRect(510, 470, 80, 23));
        CursorVolt1 = new QLabel(centralwidget);
        CursorVolt1->setObjectName(QString::fromUtf8("CursorVolt1"));
        CursorVolt1->setGeometry(QRect(290, 410, 301, 31));
        CursorVolt1->setFont(font);
        CursorVolt1->setStyleSheet(QString::fromUtf8("color:blue"));
        TG_line = new QFrame(centralwidget);
        TG_line->setObjectName(QString::fromUtf8("TG_line"));
        TG_line->setGeometry(QRect(0, 410, 600, 2));
        TG_line->setStyleSheet(QString::fromUtf8("border-top: 2px dashed red;\n"
""));
        TG_line->setFrameShape(QFrame::HLine);
        TG_line->setFrameShadow(QFrame::Sunken);
        Cursor = new QPushButton(centralwidget);
        Cursor->setObjectName(QString::fromUtf8("Cursor"));
        Cursor->setGeometry(QRect(600, 235, 151, 45));
        QFont font6;
        font6.setPointSize(10);
        Cursor->setFont(font6);
        cursor_sub = new QPushButton(centralwidget);
        cursor_sub->setObjectName(QString::fromUtf8("cursor_sub"));
        cursor_sub->setGeometry(QRect(675, 280, 75, 41));
        cursor_sub->setFont(font5);
        cursor_add = new QPushButton(centralwidget);
        cursor_add->setObjectName(QString::fromUtf8("cursor_add"));
        cursor_add->setGeometry(QRect(600, 280, 75, 41));
        cursor_add->setFont(font4);
        cursor_line1 = new QFrame(centralwidget);
        cursor_line1->setObjectName(QString::fromUtf8("cursor_line1"));
        cursor_line1->setGeometry(QRect(0, 0, 3, 410));
        cursor_line1->setFont(font4);
        cursor_line1->setStyleSheet(QString::fromUtf8("background-color: blue;   "));
        cursor_line1->setFrameShape(QFrame::VLine);
        cursor_line1->setFrameShadow(QFrame::Sunken);
        cursor_line2 = new QFrame(centralwidget);
        cursor_line2->setObjectName(QString::fromUtf8("cursor_line2"));
        cursor_line2->setGeometry(QRect(600, 0, 3, 410));
        cursor_line2->setFont(font4);
        cursor_line2->setStyleSheet(QString::fromUtf8("background-color: #ff6600;"));
        cursor_line2->setFrameShape(QFrame::VLine);
        cursor_line2->setFrameShadow(QFrame::Sunken);
        CursorVolt2 = new QLabel(centralwidget);
        CursorVolt2->setObjectName(QString::fromUtf8("CursorVolt2"));
        CursorVolt2->setGeometry(QRect(290, 440, 181, 31));
        CursorVolt2->setFont(font);
        CursorVolt2->setStyleSheet(QString::fromUtf8("color:#ff6600"));
        CursorTime = new QLabel(centralwidget);
        CursorTime->setObjectName(QString::fromUtf8("CursorTime"));
        CursorTime->setGeometry(QRect(290, 470, 181, 31));
        CursorTime->setFont(font);
        T1 = new QLabel(centralwidget);
        T1->setObjectName(QString::fromUtf8("T1"));
        T1->setGeometry(QRect(5, 390, 21, 16));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        T1->setFont(font7);
        T1->setStyleSheet(QString::fromUtf8("color:blue"));
        T2 = new QLabel(centralwidget);
        T2->setObjectName(QString::fromUtf8("T2"));
        T2->setGeometry(QRect(580, 390, 16, 21));
        T2->setFont(font);
        T2->setStyleSheet(QString::fromUtf8("color:#ff6600"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        convert->setText(QCoreApplication::translate("MainWindow", "To Spectrometer", nullptr));
        volt_mag->setText(QCoreApplication::translate("MainWindow", "Volt:", nullptr));
        time_mag->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        trigger->setText(QCoreApplication::translate("MainWindow", "TG: Auto", nullptr));
        load->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Volt", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "mag", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "offset", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "offset", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "mag", nullptr));
        time_mag_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        time_offset_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        time_offset_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        time_mag_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        volt_offset_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        volt_mag_sub_2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        volt_mag_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        volt_mag_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        frequency->setText(QCoreApplication::translate("MainWindow", "Frequency:", nullptr));
        max_value->setText(QCoreApplication::translate("MainWindow", "MaxValue:", nullptr));
        min_value->setText(QCoreApplication::translate("MainWindow", "MinVale:", nullptr));
        trigger_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        trigger_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        testopenT->setText(QCoreApplication::translate("MainWindow", "testopenT", nullptr));
        testcloseT->setText(QCoreApplication::translate("MainWindow", "testcloseT", nullptr));
        CursorVolt1->setText(QCoreApplication::translate("MainWindow", "Cursor1:", nullptr));
        Cursor->setText(QCoreApplication::translate("MainWindow", "Cursor:OFF", nullptr));
        cursor_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        cursor_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        CursorVolt2->setText(QCoreApplication::translate("MainWindow", "Cursor2:", nullptr));
        CursorTime->setText(QCoreApplication::translate("MainWindow", "T2-T1:", nullptr));
        T1->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        T2->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
