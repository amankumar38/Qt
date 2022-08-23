#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include <QtCore>
#include <QtDebug>
#include <QLabel>
#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class form; }
QT_END_NAMESPACE

class form : public QMainWindow
{
    Q_OBJECT

public:
    form(QWidget *parent = nullptr);
    ~form();

    void getdata();
    void displaydata();

private:
    Ui::form *ui;

    QLabel lable_frist_name, lable_last_name, lable_gender, lable_age, lable_adress;


};
#endif // FORM_H
