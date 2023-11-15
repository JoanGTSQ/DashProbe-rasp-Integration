/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *changeLightPositionTest;
    QPushButton *pushButton2;
    QRadioButton *radioButtonOption1;
    QRadioButton *radioButtonOption2;
    QRadioButton *radioButtonOption3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_luz_izq;
    QLabel *label_luz_drc1;
    QPushButton *loadSystemButton;
    QLabel *label_3;
    QLabel *label_rasp_connected;
    QFrame *frame;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 400);
        MainWindow->setMinimumSize(QSize(400, 400));
        MainWindow->setBaseSize(QSize(400, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        changeLightPositionTest = new QPushButton(centralwidget);
        changeLightPositionTest->setObjectName(QString::fromUtf8("changeLightPositionTest"));
        changeLightPositionTest->setGeometry(QRect(10, 10, 150, 32));
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(170, 10, 200, 32));
        radioButtonOption1 = new QRadioButton(centralwidget);
        radioButtonOption1->setObjectName(QString::fromUtf8("radioButtonOption1"));
        radioButtonOption1->setGeometry(QRect(10, 100, 71, 32));
        radioButtonOption2 = new QRadioButton(centralwidget);
        radioButtonOption2->setObjectName(QString::fromUtf8("radioButtonOption2"));
        radioButtonOption2->setGeometry(QRect(110, 100, 150, 32));
        radioButtonOption3 = new QRadioButton(centralwidget);
        radioButtonOption3->setObjectName(QString::fromUtf8("radioButtonOption3"));
        radioButtonOption3->setGeometry(QRect(280, 100, 91, 32));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 160, 59, 15));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 160, 59, 15));
        label_luz_izq = new QLabel(centralwidget);
        label_luz_izq->setObjectName(QString::fromUtf8("label_luz_izq"));
        label_luz_izq->setGeometry(QRect(70, 200, 61, 16));
        label_luz_izq->setAlignment(Qt::AlignCenter);
        label_luz_drc1 = new QLabel(centralwidget);
        label_luz_drc1->setObjectName(QString::fromUtf8("label_luz_drc1"));
        label_luz_drc1->setGeometry(QRect(200, 200, 61, 16));
        label_luz_drc1->setAlignment(Qt::AlignCenter);
        loadSystemButton = new QPushButton(centralwidget);
        loadSystemButton->setObjectName(QString::fromUtf8("loadSystemButton"));
        loadSystemButton->setGeometry(QRect(10, 60, 361, 32));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 380, 71, 16));
        label_rasp_connected = new QLabel(centralwidget);
        label_rasp_connected->setObjectName(QString::fromUtf8("label_rasp_connected"));
        label_rasp_connected->setGeometry(QRect(90, 380, 91, 16));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 381, 371));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 376, 361));
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        changeLightPositionTest->setText(QApplication::translate("MainWindow", "Resumen", 0, QApplication::UnicodeUTF8));
        pushButton2->setText(QApplication::translate("MainWindow", "Cambiar posicion luz/luces", 0, QApplication::UnicodeUTF8));
        radioButtonOption1->setText(QApplication::translate("MainWindow", "Luz izq.", 0, QApplication::UnicodeUTF8));
        radioButtonOption2->setText(QApplication::translate("MainWindow", "Ambas/juntar luces", 0, QApplication::UnicodeUTF8));
        radioButtonOption3->setText(QApplication::translate("MainWindow", "luz drc.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "LUZ IZQ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "LUZ DRC", 0, QApplication::UnicodeUTF8));
        label_luz_izq->setText(QApplication::translate("MainWindow", "Text", 0, QApplication::UnicodeUTF8));
        label_luz_drc1->setText(QApplication::translate("MainWindow", "Text", 0, QApplication::UnicodeUTF8));
        loadSystemButton->setText(QApplication::translate("MainWindow", "CARGAR SISTEMA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Raspberry", 0, QApplication::UnicodeUTF8));
        label_rasp_connected->setText(QApplication::translate("MainWindow", "No conectado", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "CARGANDO", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
