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

void botaoPesquisaFilial::setConects()
{
    connect(ui->tabelaSelecaoFilial, SIGNAL(itemDoubleClicked(QTableWidgetItem*)), this, SLOT(clicouEmFilial(QTableWidgetItem*)));
}

QString botaoPesquisaFilial::getId()
{
    return idFilial;
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

        item0->setData(QTableWidgetItem::UserType,QVariant(QMetaType::QObjectStar, &filial));

        linha ++;

        ui->tabelaSelecaoFilial->resizeColumnsToContents();
        ui->tabelaSelecaoFilial->resizeRowsToContents();

    }

}

void botaoPesquisaFilial::configuracoesIniciais()
{
    montarTWFilial();
    setConects();
}

void botaoPesquisaFilial::clicouEmFilial(QTableWidgetItem *item)
{
    if(item == nullptr)
        return;

    QTableWidgetItem * itemId = ui->tabelaSelecaoFilial->item(item->row(),0);

    if(itemId == nullptr)
        return;

    idFilial = itemId->text();

    CadastroBaseNegocio* listaFilial;

    QVariant value = item->data(QTableWidgetItem::UserType);

    if(!value.isNull()){
        listaFilial = qobject_cast <CadastroBaseNegocio*>(qvariant_cast<QObject*>(value));
        if(listaFilial != nullptr)
            qDebug() << "Diz que sabe";

    }

    this->accept();
}
