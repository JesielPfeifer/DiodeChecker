#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QDialog>

namespace Ui {
class main_menu;
}

class main_menu : public QDialog
{
    Q_OBJECT

public:
    explicit main_menu(QWidget *parent = nullptr);
    ~main_menu();

private slots:
    void on_bt_mostrar_clicked();

    void on_bt_mostrar_completo_clicked();

private:
    Ui::main_menu *ui;
};

#endif // MAIN_MENU_H
