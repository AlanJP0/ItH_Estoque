#ifndef BOTAOPESQUISAPRODUTO_H
#define BOTAOPESQUISAPRODUTO_H

#include <QDialog>

namespace Ui {
class botaoPesquisaProduto;
}

class botaoPesquisaProduto : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaProduto(QWidget *parent = nullptr);
    ~botaoPesquisaProduto();

private:
    Ui::botaoPesquisaProduto *ui;
};

#endif // BOTAOPESQUISAPRODUTO_H
