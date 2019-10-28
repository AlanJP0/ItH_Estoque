#include "botaopesquisasecao.h"
#include "ui_botaopesquisasecao.h"

#include "negocio/cadastrobasenegocio.h"

botaoPesquisaSecao::botaoPesquisaSecao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaSecao)
{
    ui->setupUi(this);

    configuracoesIniciais();
}

botaoPesquisaSecao::~botaoPesquisaSecao()
{
    delete ui;
}

void botaoPesquisaSecao::montarTWSecao()
{
    CadastroBaseNegocio cadastrobase;
    QList<Secao*> listSecao = cadastrobase.buscarListSecao();

    int linha = 0;
    foreach (Secao* secao, listSecao) {
        ui->tabelaSelecaoSecao->insertRow(linha);

        QTableWidgetItem* item0 = new QTableWidgetItem;
        item0->setText(QString::number(secao->getIdSecao()));
        ui->tabelaSelecaoSecao->setItem(linha, 0 , item0);

        QTableWidgetItem* item1 = new QTableWidgetItem;
        item1->setText(secao->getDescricao());
        ui->tabelaSelecaoSecao->setItem(linha, 1 , item1);

        linha ++;

        ui->tabelaSelecaoSecao->resizeColumnsToContents();
        ui->tabelaSelecaoSecao->resizeRowsToContents();

    }
}

void botaoPesquisaSecao::configuracoesIniciais()
{
    montarTWSecao();
}
