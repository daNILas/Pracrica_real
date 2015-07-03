#ifndef WIDGET_H
#define WIDGET_H


#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QWidget>


class MyWindow : public QDialog
{
    Q_OBJECT

public:
    MyWindow (QWidget *parent=0);

private:
    QLabel *lbl;
    QLineEdit *line;
    QPushButton *ok;
    QPushButton *close;
    QCheckBox *cb1;




};

#endif // WIDGET_H
