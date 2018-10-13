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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *dama1;
    QLabel *dama2;
    QLabel *dama3;
    QLabel *dama4;
    QLabel *dama5;
    QLabel *dama6;
    QLabel *dama7;
    QLabel *dama8;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(746, 652);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ImagenTablero = new QLabel(centralWidget);
        ImagenTablero->setObjectName(QStringLiteral("ImagenTablero"));
        ImagenTablero->setGeometry(QRect(110, 20, 511, 511));
        ImagenTablero->setBaseSize(QSize(100, 200));
        ImagenTablero->setText(QStringLiteral(""));
        ImagenTablero->setTextFormat(Qt::PlainText);
        ImagenTablero->setPixmap(QPixmap(QString::fromUtf8(":/Proyecto 1/12451.png")));
        ImagenTablero->setWordWrap(false);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 560, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 560, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 540, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 570, 75, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 570, 75, 23));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(560, 570, 75, 23));
        dama1 = new QLabel(centralWidget);
        dama1->setObjectName(QStringLiteral("dama1"));
        dama1->setGeometry(QRect(110, 20, 61, 61));
        dama1->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama2 = new QLabel(centralWidget);
        dama2->setObjectName(QStringLiteral("dama2"));
        dama2->setGeometry(QRect(110, 80, 71, 61));
        dama2->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama3 = new QLabel(centralWidget);
        dama3->setObjectName(QStringLiteral("dama3"));
        dama3->setGeometry(QRect(110, 470, 61, 61));
        dama3->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama4 = new QLabel(centralWidget);
        dama4->setObjectName(QStringLiteral("dama4"));
        dama4->setGeometry(QRect(110, 280, 61, 61));
        dama4->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama5 = new QLabel(centralWidget);
        dama5->setObjectName(QStringLiteral("dama5"));
        dama5->setGeometry(QRect(110, 340, 61, 61));
        dama5->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama6 = new QLabel(centralWidget);
        dama6->setObjectName(QStringLiteral("dama6"));
        dama6->setGeometry(QRect(110, 210, 71, 61));
        dama6->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama7 = new QLabel(centralWidget);
        dama7->setObjectName(QStringLiteral("dama7"));
        dama7->setGeometry(QRect(110, 150, 61, 61));
        dama7->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        dama8 = new QLabel(centralWidget);
        dama8->setObjectName(QStringLiteral("dama8"));
        dama8->setGeometry(QRect(110, 400, 61, 61));
        dama8->setPixmap(QPixmap(QString::fromUtf8(":/dama.jpg")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 746, 18));
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
        pushButton->setText(QApplication::translate("MainWindow", "Siguiente", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Dibujar", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Arriba", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Izquierda", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Derecha", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Abajo", nullptr));
        dama1->setText(QString());
        dama2->setText(QString());
        dama3->setText(QString());
        dama4->setText(QString());
        dama5->setText(QString());
        dama6->setText(QString());
        dama7->setText(QString());
        dama8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
