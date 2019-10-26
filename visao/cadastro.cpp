#include "Cadastro.h"
#include "ui_cadastro.h"
#include "qdebug.h"
#include <QMessageBox>
#include "negocio/bancoddados.h"
#include <QRegExpValidator>
#include <negocio/cadastrobasenegocio.h>
#define validar_rx "^#([a-zA-Z0-9 ]*) : ([a-zA-Z0-9 ]*)$"   //"^[A-Za-záàâãéèêíïóôõöúçñÁÀÂÃÉÈÍÏÓÔÕÖÚÇÑ]+$"
#define double_rx "^[0-9]+\\/.?[0-9]*$]"


Cadastro::Cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    configuracaoInicial();


    QRegExp regString(validar_rx);
    QRegExpValidator *validarString = new QRegExpValidator(regString, this);
    ui->leFilial->setValidator(validarString);
    ui->leDepartamento->setValidator(validarString);
    ui->leCategoria->setValidator(validarString);
    ui->leSecao->setValidator(validarString);
    ui->leProduto->setValidator(validarString);

//    QRegExp regDouble(double_rx);
//    QRegExpValidator *validarDouble = new QRegExpValidator(regString, this);
}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::configuracaoInicial()
{
    //texto e botao Filial
    connect(ui->leFilial, SIGNAL(returnPressed()), this, SLOT(clicouLePesquisarFilial()));
    connect(ui->pbFilial, SIGNAL(clicked(bool)), this, SLOT(clicouLePesquisarFilial()));
    //texto e botao Departamento
    connect(ui->leDepartamento, SIGNAL(returnPressed()), this, SLOT(clicouLePesquisarDepartamento()));
    connect(ui->pbDepartamento, SIGNAL(clicked(bool)), this, SLOT(clicouLePesquisarDepartamento()));
    //texto e botao Secao
    connect(ui->leSecao, SIGNAL(returnPressed()), this, SLOT(clicouLePesquisarSecao()));
    connect(ui->pbSecao, SIGNAL(clicked(bool)), this, SLOT(clicouLePesquisarSecao()));
    //texto e botao Categoria
    connect(ui->leCategoria, SIGNAL(returnPressed()), this, SLOT(clicouLePesquisarCategoria()));
    connect(ui->pbCategoria, SIGNAL(clicked(bool)), this, SLOT(clicouLePesquisarCategoria()));
    //texto e botao Produto
    connect(ui->leProduto, SIGNAL(returnPressed), this, SLOT(clicouLePesquisarProduto()));
    connect(ui->pbProduto, SIGNAL(clicked(bool)), this, SLOT(clicouLePesquisarProduto()));
    //botao Base
    connect(ui->leBase, SIGNAL(returnPressed), this, SLOT(clicouLePesquisarBase()));

    connect(ui->pbSalvar, SIGNAL(clicked(bool)), this, SLOT(clicouLeSalvar()));
    connect(ui->pbLimpar, SIGNAL(clicked(bool)), this, SLOT(clicouLeLimpar()));

}

void Cadastro::clicouLePesquisarFilial()
{

    qDebug() << "Cara o usuario clicou em Pesquisar Filial";
}
void Cadastro::clicouLePesquisarDepartamento()
{
    qDebug() << "Cara o usuario clicou em Pesquisar Departamento";
}
void Cadastro::clicouLePesquisarSecao()
{
    CadastroBaseNegocio* cadastrobase = new CadastroBaseNegocio;
    qDebug() << "Cara o usuario clicou em Pesquisar Secao";
}
void Cadastro::clicouLePesquisarCategoria()
{
    qDebug() << "Cara o usuario clicou em Pesquisar Categoria";
}
void Cadastro::clicouLePesquisarProduto()
{
    qDebug() << "Cara o usuario clicou em Pesquisar Produto";
}
void Cadastro::clicouLePesquisarBase()
{
    qDebug() << "Cara o usuario clicou em Pesquisar Base";
}
void Cadastro::clicouLeSalvar()
{
    qDebug() << "Cara o usuario em Salvar";
}
void Cadastro::clicouLeLimpar()
{
    qDebug() << "Cara o usuario clicou em Limpar";
    ui->leFilial->clear();
    ui->leDepartamento->clear();
    ui->leCategoria->clear();
    ui->leProduto->clear();
    ui->leBase->clear();
    ui->leSecao->clear();
    ui->leFilial->setFocus();
}

void Cadastro::on_pbSalvar_clicked()
{

}
