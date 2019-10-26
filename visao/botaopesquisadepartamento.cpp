#include "botaopesquisadepartamento.h"
#include "ui_botaopesquisadepartamento.h"

botaoPesquisaDepartamento::botaoPesquisaDepartamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaDepartamento)
{
    ui->setupUi(this);
}

botaoPesquisaDepartamento::~botaoPesquisaDepartamento()
{
    delete ui;
}
