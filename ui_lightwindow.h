/********************************************************************************
** Form generated from reading UI file 'lightwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTWINDOW_H
#define UI_LIGHTWINDOW_H

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

class Ui_LightWindow
{
public:
    QWidget *centralwidget;
    QPushButton *changeLightPositionTest;
    QPushButton *changeButtonLights;
    QRadioButton *radioButtonLeftLight;
    QRadioButton *radioButtonTwoLights;
    QRadioButton *radioButtonRightLight;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_luz_izq;
    QLabel *label_luz_drc1;
    QPushButton *loadSystemButton;
    QLabel *label_3;
    QLabel *label_rasp_connected;
    QFrame *frame;
    QLabel *label_4;

    void setupUi(QMainWindow *LightWindow)
    {
        if (LightWindow->objectName().isEmpty())
            LightWindow->setObjectName(QString::fromUtf8("LightWindow"));
        LightWindow->resize(400, 400);
        LightWindow->setMinimumSize(QSize(400, 400));
        LightWindow->setBaseSize(QSize(400, 400));
        centralwidget = new QWidget(LightWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        changeLightPositionTest = new QPushButton(centralwidget);
        changeLightPositionTest->setObjectName(QString::fromUtf8("changeLightPositionTest"));
        changeLightPositionTest->setGeometry(QRect(10, 10, 150, 32));
        changeButtonLights = new QPushButton(centralwidget);
        changeButtonLights->setObjectName(QString::fromUtf8("changeButtonLights"));
        changeButtonLights->setGeometry(QRect(170, 10, 200, 32));
        changeButtonLights->setAutoFillBackground(true);
        radioButtonLeftLight = new QRadioButton(centralwidget);
        radioButtonLeftLight->setObjectName(QString::fromUtf8("radioButtonLeftLight"));
        radioButtonLeftLight->setGeometry(QRect(10, 100, 71, 32));
        radioButtonTwoLights = new QRadioButton(centralwidget);
        radioButtonTwoLights->setObjectName(QString::fromUtf8("radioButtonTwoLights"));
        radioButtonTwoLights->setGeometry(QRect(110, 100, 150, 32));
        radioButtonRightLight = new QRadioButton(centralwidget);
        radioButtonRightLight->setObjectName(QString::fromUtf8("radioButtonRightLight"));
        radioButtonRightLight->setGeometry(QRect(280, 100, 91, 32));
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
        label_rasp_connected->setGeometry(QRect(90, 380, 101, 16));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(10, 10, 381, 371));
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 376, 361));
        label_4->setAlignment(Qt::AlignCenter);
        LightWindow->setCentralWidget(centralwidget);

        retranslateUi(LightWindow);

        QMetaObject::connectSlotsByName(LightWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LightWindow)
    {
        changeLightPositionTest->setText(QApplication::translate("LightWindow", "Resumen", 0, QApplication::UnicodeUTF8));
        changeButtonLights->setText(QApplication::translate("LightWindow", "Cambiar posicion luz/luces", 0, QApplication::UnicodeUTF8));
        radioButtonLeftLight->setText(QApplication::translate("LightWindow", "Luz izq.", 0, QApplication::UnicodeUTF8));
        radioButtonTwoLights->setText(QApplication::translate("LightWindow", "Ambas/juntar luces", 0, QApplication::UnicodeUTF8));
        radioButtonRightLight->setText(QApplication::translate("LightWindow", "luz drc.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LightWindow", "LUZ IZQ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LightWindow", "LUZ DRC", 0, QApplication::UnicodeUTF8));
        label_luz_izq->setText(QApplication::translate("LightWindow", "Text", 0, QApplication::UnicodeUTF8));
        label_luz_drc1->setText(QApplication::translate("LightWindow", "Text", 0, QApplication::UnicodeUTF8));
        loadSystemButton->setText(QApplication::translate("LightWindow", "CARGAR SISTEMA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LightWindow", "Raspberry", 0, QApplication::UnicodeUTF8));
        label_rasp_connected->setText(QApplication::translate("LightWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">No conectado</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LightWindow", "CARGANDO", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(LightWindow);
    } // retranslateUi

};

namespace Ui {
    class LightWindow: public Ui_LightWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTWINDOW_H
