#include "botaopesquisadepartamento.h"
#include "ui_botaopesquisadepartamento.h"

#include "negocio/cadastrobasenegocio.h"

botaoPesquisaDepartamento::botaoPesquisaDepartamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botaoPesquisaDepartamento)
{
    ui->setupUi(this);

    configuracoesIniciais();
}

botaoPesquisaDepartamento::~botaoPesquisaDepartamento()
{
    delete ui;
}

void botaoPesquisaDepartamento::montarTWDepartamento()
{
    CadastroBaseNegocio cadastrobase;
    QList<Departamento*> listDepartamento = cadastrobase.buscarListDepartamento();

    int linha = 0;
    foreach (Departamento* departamento, listDepartamento) {
        ui->tabelaSelecaoDepartamento->insertRow(linha);

        QTableWidgetItem* item0 = new QTableWidgetItem;
        item0->setText(QString::number(departamento->getIdDepartamento()));
        ui->tabelaSelecaoDepartamento->setItem(linha, 0 , item0);

        QTableWidgetItem* item1 = new QTableWidgetItem;
        item1->setText(departamento->getDescricao());
        ui->tabelaSelecaoDepartamento->setItem(linha, 1 , item1);

        linha ++;

        ui->tabelaSelecaoDepartamento->resizeColumnsToContents();
        ui->tabelaSelecaoDepartamento->resizeRowsToContents();

    }
}

void botaoPesquisaDepartamento::configuracoesIniciais()
{
    montarTWDepartamento();
}
