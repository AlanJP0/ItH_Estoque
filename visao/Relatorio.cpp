#include "Relatorio.h"
#include "ui_relatorio.h"
#include "Cadastro.h"
#include "QTableWidget"
#include "QTableWidgetItem"
#include "qdebug.h"
#include "negocio/cadastrodebasenegocio.h"
#include "negocio/bancoddados.h"
#include <QtSql>
#include "negocio/estoquenegocio.h"
#include "dominio/Filial.h"
#include "dominio/Produto.h"
#include "dominio/Categoria.h"

Relatorio::Relatorio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Relatorio)
{
    ui->setupUi(this);
    configuracoesInicais();
    bancoddados();

}

Relatorio::~Relatorio()
{
    delete ui;

}

void Relatorio::montarTw()
{
qDebug() << "Chegou no montarTW";
    EstoqueNegocio estoqueNegocio;
    QList<Estoque*> listEstoque = estoqueNegocio.recuperaListEstoque(1);

    int linha = 0;
    foreach (Estoque* estoque, listEstoque) {
        ui->tableWidget->insertRow(linha);

        QTableWidgetItem* item = new QTableWidgetItem;
        item->setText(estoque->getFilial()->getDescricao());
        ui->tableWidget->setItem(linha, 0, item);

        QTableWidgetItem* item1 = new QTableWidgetItem;
        item1->setText(estoque->getProduto()->getDescricao());
        ui->tableWidget->setItem(linha, 1, item1);


        QTableWidgetItem* item2 = new QTableWidgetItem;
        item2->setText(estoque->getProduto()->getCategoria()->getDescricao());
        ui->tableWidget->setItem(linha, 2, item2);


        linha++;
    }
    qDebug() << listEstoque.size();

}

void Relatorio::configuracoesInicais()
{
    ui->stackedWidget->setCurrentIndex(0);

    Cadastro* cadastro = new Cadastro;

    ui->stackedWidget->addWidget(cadastro);

    connect(ui->pbCadastrar, SIGNAL(clicked(bool)), this, SLOT(clicouCadastrar()));
    connect(ui->pbRelatorio, SIGNAL(clicked(bool)), this, SLOT(clicouRelatorio()));

//    montarTw();
}

void Relatorio::clicouCadastrar()
{
    qDebug() << "Cara o usuario clicou aqui Cadastrar";
ui->stackedWidget->setCurrentIndex(1);
}

void Relatorio::clicouRelatorio()
{
    qDebug() << "Cara o usuario clicou aqui no Relatorio";
ui->stackedWidget->setCurrentIndex(0);
montarTw();
}
