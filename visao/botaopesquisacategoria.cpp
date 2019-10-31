#include "botaopesquisacategoria.h"
#include "ui_botaopesquisacategoria.h"

#include "negocio/cadastrobasenegocio.h"

botaoPesquisaCategoria::botaoPesquisaCategoria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaCategoria)
{
    ui->setupUi(this);

    configuracoesIniciais();
}

botaoPesquisaCategoria::~botaoPesquisaCategoria()
{
    delete ui;
}

void botaoPesquisaCategoria::montarTWCategoria()
{
    CadastroBaseNegocio cadastrobase;
    QList<Categoria*> listCategoria = cadastrobase.buscarListCategoria();

    int linha = 0;
    foreach (Categoria* categoria, listCategoria) {
        ui->tabelaSelecaoCategoria->insertRow(linha);

        QTableWidgetItem* item0 = new QTableWidgetItem;
        item0->setText(QString::number(categoria->getIdcategoria()));
        ui->tabelaSelecaoCategoria->setItem(linha, 0 , item0);

        QTableWidgetItem* item1 = new QTableWidgetItem;
        item1->setText(categoria->getDescricao());
        ui->tabelaSelecaoCategoria->setItem(linha, 1 , item1);

        linha ++;

        ui->tabelaSelecaoCategoria->resizeColumnsToContents();
        ui->tabelaSelecaoCategoria->resizeRowsToContents();

    }
}

void botaoPesquisaCategoria::configuracoesIniciais()
{
    montarTWCategoria();
}

void botaoPesquisaCategoria::clicouEmFilial(QTableWidgetItem *item)
{

}
