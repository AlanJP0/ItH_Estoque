#ifndef BOTAOPESQUISADEPARTAMENTO_H
#define BOTAOPESQUISADEPARTAMENTO_H

#include <QDialog>

namespace Ui {
class botaoPesquisaDepartamento;
}

class botaoPesquisaDepartamento : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaDepartamento(QWidget *parent = nullptr);
    ~botaoPesquisaDepartamento();

private:
    Ui::botaoPesquisaDepartamento *ui;
};

#endif // BOTAOPESQUISADEPARTAMENTO_H
