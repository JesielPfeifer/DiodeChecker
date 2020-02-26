#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main_menu.h"
#include <QMessageBox>

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


void MainWindow::on_bt_login_clicked()
{
    QString login = ui->le_login->text();
    QString senha = ui->le_senha->text();

    if(login == "FixBug" && senha == "fixbug123"){
        QMessageBox::information(this,"Login", "Ok");
        //mainwindow.h adicionar nos includes "main_menu.h" e private slots criar o ponteiro main_menu *menu;
        this->close();
        menu = new main_menu(this);
        menu->show();
    }else{
        QMessageBox::information(this,"Login", "Usuario ou nome invalidos!");
    }
}
