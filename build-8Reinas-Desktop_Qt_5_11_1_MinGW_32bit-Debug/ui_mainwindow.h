/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *ImagenTablero;
    QLabel *dama1;
    QLabel *dama2;
    QLabel *dama3;
    QLabel *dama4;
    QLabel *dama5;
    QLabel *dama6;
    QLabel *dama7;
    QLabel *dama8;
    QPushButton *btnSiguiente;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(780, 725);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ImagenTablero = new QLabel(centralWidget);
        ImagenTablero->setObjectName(QStringLiteral("ImagenTablero"));
        ImagenTablero->setGeometry(QRect(0, 0, 701, 641));
        ImagenTablero->setBaseSize(QSize(100, 200));
        ImagenTablero->setText(QStringLiteral(""));
        ImagenTablero->setTextFormat(Qt::PlainText);
        ImagenTablero->setPixmap(QPixmap(QString::fromUtf8(":/Tablero.jpg")));
        ImagenTablero->setScaledContents(false);
        ImagenTablero->setWordWrap(false);
        dama1 = new QLabel(centralWidget);
        dama1->setObjectName(QStringLiteral("dama1"));
        dama1->setGeometry(QRect(70, 20, 61, 61));
        dama1->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama1->setScaledContents(false);
        dama1->setWordWrap(true);
        dama2 = new QLabel(centralWidget);
        dama2->setObjectName(QStringLiteral("dama2"));
        dama2->setGeometry(QRect(70, 90, 61, 61));
        dama2->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama2->setScaledContents(false);
        dama3 = new QLabel(centralWidget);
        dama3->setObjectName(QStringLiteral("dama3"));
        dama3->setGeometry(QRect(70, 160, 61, 61));
        dama3->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama3->setScaledContents(false);
        dama4 = new QLabel(centralWidget);
        dama4->setObjectName(QStringLiteral("dama4"));
        dama4->setGeometry(QRect(70, 230, 61, 61));
        dama4->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama4->setScaledContents(false);
        dama5 = new QLabel(centralWidget);
        dama5->setObjectName(QStringLiteral("dama5"));
        dama5->setGeometry(QRect(70, 300, 61, 61));
        dama5->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama5->setScaledContents(false);
        dama6 = new QLabel(centralWidget);
        dama6->setObjectName(QStringLiteral("dama6"));
        dama6->setGeometry(QRect(70, 370, 61, 61));
        dama6->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama6->setScaledContents(false);
        dama7 = new QLabel(centralWidget);
        dama7->setObjectName(QStringLiteral("dama7"));
        dama7->setGeometry(QRect(70, 440, 61, 61));
        dama7->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama7->setScaledContents(false);
        dama8 = new QLabel(centralWidget);
        dama8->setObjectName(QStringLiteral("dama8"));
        dama8->setGeometry(QRect(70, 510, 61, 61));
        dama8->setPixmap(QPixmap(QString::fromUtf8(":/reina.png")));
        dama8->setScaledContents(false);
        btnSiguiente = new QPushButton(centralWidget);
        btnSiguiente->setObjectName(QStringLiteral("btnSiguiente"));
        btnSiguiente->setGeometry(QRect(310, 600, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 780, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ocho Reinas", nullptr));
        dama1->setText(QString());
        dama2->setText(QString());
        dama3->setText(QString());
        dama4->setText(QString());
        dama5->setText(QString());
        dama6->setText(QString());
        dama7->setText(QString());
        dama8->setText(QString());
        btnSiguiente->setText(QApplication::translate("MainWindow", "Siguiente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
