/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *OK_button;
    QPushButton *close_button;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(312, 303);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 0, 81, 18));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(0, 170, 201, 22));
        checkBox->setChecked(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 60, 131, 18));
        label_3->setFrameShape(QFrame::NoFrame);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 91, 18));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 80, 151, 31));
        comboBox->setStyleSheet(QStringLiteral(""));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 200, 201, 22));
        checkBox_2->setChecked(true);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(2, 131, 151, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 110, 59, 18));
        OK_button = new QPushButton(centralWidget);
        OK_button->setObjectName(QStringLiteral("OK_button"));
        OK_button->setGeometry(QRect(210, 160, 91, 34));
        close_button = new QPushButton(centralWidget);
        close_button->setObjectName(QStringLiteral("close_button"));
        close_button->setGeometry(QRect(210, 200, 91, 34));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(0, 20, 151, 32));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(150, 20, 161, 32));
        comboBox_4 = new QComboBox(centralWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(150, 80, 161, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 60, 141, 18));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 130, 161, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 312, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\273\320\265\320\262\320\260\321\217 \320\236\320\241", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214 \320\245-\320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\236\320\241:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\320\260\321\217 \320\236\320\241", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        comboBox->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        comboBox->setCurrentText(QString());
        checkBox_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277 \320\262 \320\270\320\275\321\202\320\265\321\200\320\275\320\265\321\202", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\321\200\321\203\320\263\320\276\320\265:", Q_NULLPTR));
        OK_button->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        close_button->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\260 \320\274\320\276\320\275\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
