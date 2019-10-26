#include "botaopesquisacategoria.h"
#include "ui_botaopesquisacategoria.h"

botaoPesquisaCategoria::botaoPesquisaCategoria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaCategoria)
{
    ui->setupUi(this);
}

botaoPesquisaCategoria::~botaoPesquisaCategoria()
{
    delete ui;
}
