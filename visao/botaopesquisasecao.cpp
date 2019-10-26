#include "botaopesquisasecao.h"
#include "ui_botaopesquisasecao.h"

botaoPesquisaSecao::botaoPesquisaSecao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaSecao)
{
    ui->setupUi(this);
}

botaoPesquisaSecao::~botaoPesquisaSecao()
{
    delete ui;
}
