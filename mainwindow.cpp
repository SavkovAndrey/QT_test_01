#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton replay =
        QMessageBox::question(this, "Заголовок", "Просто текст внутри",
                              QMessageBox::Yes | QMessageBox::No);
    if(replay == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug() << "Кнопка нет была нажата";
    }
}

