#include "botaopesquisafilial.h"
#include "ui_botaopesquisafilial.h"
#include "qdebug.h"
#include "negocio/cadastrobasenegocio.h"

botaoPesquisaFilial::botaoPesquisaFilial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaFilial)
{
    ui->setupUi(this);
    configuracoesIniciais();
    qDebug() << "Chegou no botaoPesquisa Filial";
}

botaoPesquisaFilial::~botaoPesquisaFilial()
{
    delete ui;
}

void botaoPesquisaFilial::montarTWFilial()
{
    CadastroBaseNegocio cadastrobase;
    QList<Filial*> listFilial = cadastrobase.buscarListFilial();

    int linha = 0;
    foreach (Filial* filial, listFilial) {
        ui->tabelaSelecaoFilial->insertRow(linha);

        QTableWidgetItem* item0 = new QTableWidgetItem;
        item0->setText(QString::number(filial->getIdFilial()));
        ui->tabelaSelecaoFilial->setItem(linha, 0 , item0);

        QTableWidgetItem* item1 = new QTableWidgetItem;
        item1->setText(filial->getDescricao());
        ui->tabelaSelecaoFilial->setItem(linha, 1 , item1);

        linha ++;

        ui->tabelaSelecaoFilial->resizeColumnsToContents();
        ui->tabelaSelecaoFilial->resizeRowsToContents();

    }

}

void botaoPesquisaFilial::configuracoesIniciais()
{
    montarTWFilial();
}
