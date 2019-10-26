#include "botaopesquisafilial.h"
#include "ui_botaopesquisafilial.h"

botaoPesquisaFilial::botaoPesquisaFilial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaFilial)
{
    ui->setupUi(this);
}

botaoPesquisaFilial::~botaoPesquisaFilial()
{
    delete ui;
}
