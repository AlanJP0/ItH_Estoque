#include "botaopesquisaproduto.h"
#include "ui_botaopesquisaproduto.h"

botaoPesquisaProduto::botaoPesquisaProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaProduto)
{
    ui->setupUi(this);
}

botaoPesquisaProduto::~botaoPesquisaProduto()
{
    delete ui;
}
