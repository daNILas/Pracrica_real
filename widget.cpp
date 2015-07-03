#include "widget.h"

MyWindow::MyWindow(QWidget *parent) : QDialog(parent)
{
    lbl=new QLabel("Enter");
    line=new QLineEdit;
    cb1=new QCheckBox("Новое окно");
    ok = new QPushButton("Показать");
    close = new QPushButton("Выход");
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);
    QVBoxLayout *left = new QVBoxLayout;
    left->addLayout(layout);
    left->addWidget(cb1);
    QVBoxLayout *right = new QVBoxLayout;
    right->addWidget(ok);
    right->addWidget(close);
    QHBoxLayout *mains = new QHBoxLayout;
    mains->addLayout(left);
    mains->addLayout(right);


    setLayout(mains);

}
