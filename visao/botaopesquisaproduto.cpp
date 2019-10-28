#include "botaopesquisaproduto.h"
#include "ui_botaopesquisaproduto.h"

#include "negocio/cadastrobasenegocio.h"

botaoPesquisaProduto::botaoPesquisaProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaProduto)
{
    ui->setupUi(this);

    configuracoesIniciais();
}

botaoPesquisaProduto::~botaoPesquisaProduto()
{
    delete ui;
}

void botaoPesquisaProduto::montarTWPrduto()
{
    CadastroBaseNegocio cadastrobase;
    QList<Produto*> listProduto = cadastrobase.buscarListProduto();

    int linha = 0;
    foreach (Produto* produto, listProduto) {
        ui->tabelaSelecaoProduto->insertRow(linha);

        QTableWidgetItem* item0 = new QTableWidgetItem;
        item0->setText(QString::number(produto->getIdProduto()));
        ui->tabelaSelecaoProduto->setItem(linha, 0 , item0);

        QTableWidgetItem* item1 = new QTableWidgetItem;
        item1->setText(produto->getDescricao());
        ui->tabelaSelecaoProduto->setItem(linha, 1 , item1);

        linha ++;

        ui->tabelaSelecaoProduto->resizeColumnsToContents();
        ui->tabelaSelecaoProduto->resizeRowsToContents();

    }
}

void botaoPesquisaProduto::configuracoesIniciais()
{
    montarTWPrduto();
}
