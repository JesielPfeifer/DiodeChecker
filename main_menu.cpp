#include "main_menu.h"
#include "ui_main_menu.h"
#include <QPixmap>
main_menu::main_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main_menu)
{
    ui->setupUi(this);
    QPixmap logo(":/img/imagens/logo.jpeg");
    ui->fotos->setPixmap(logo.scaled(500,500,Qt::KeepAspectRatio));
}

main_menu::~main_menu()
{
    delete ui;
}

void main_menu::on_bt_mostrar_clicked()
{
    if(ui->rb_g360m->isChecked()){
        QPixmap g360m(":/img/imagens/G360_FPC_LCD.png");
        ui->fotos->setPixmap(g360m.scaled(269,320,Qt::KeepAspectRatio));
    }
}

void main_menu::on_bt_mostrar_completo_clicked()
{
    if(ui->rb_g360m->isChecked()){
        QPixmap fpc_cmp_g360(":/img/imagens/fpc_completo_g360m.jpeg");
        ui->fotos->setPixmap(fpc_cmp_g360.scaled(500,500,Qt::KeepAspectRatio));
    }
}
