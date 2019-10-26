#include "botaopesquisarsecao.h"
#include "ui_botaopesquisarsecao.h"

botaoPesquisarSecao::botaoPesquisarSecao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisarSecao)
{
    ui->setupUi(this);
}

botaoPesquisarSecao::~botaoPesquisarSecao()
{
    delete ui;
}
