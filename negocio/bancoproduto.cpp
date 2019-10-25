#include "bancoproduto.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

bancoproduto::bancoproduto(QObject* parent) : QObject(parent)
{

}

int bancoproduto::getIdProduto() const
{
    return id;
}

QString bancoproduto::getDescricaoProduto(int id) const
{
    QSqlQuery query;
    query.prepare("SELECT produto FROM produto where id_produto = (:identificacao);"); //lidar com id depois
    query.bindValue(":identificacao", id);
    query.exec();
    QString descricaoProduto;
    if (query.next()){
        descricaoProduto = query.value("produto").toString();
    }
    return descricaoProduto;
}

bool bancoproduto::inserirDescricaoProduto(const QString &value)
{
    QSqlQuery query;
    query.prepare("INSERT INTO produto(produto) values ('" + value + "');");
    if (!query.exec()){
        return false;
    } else {
        return true;
    }
    //descricao = value;
}

double bancoproduto::getValorProduto() const
{
    QSqlQuery query;
    query.prepare("SELECT valor FROM produto"); //lidar com id depois
    query.exec();
    //return valor;
}

bool bancoproduto::defineValorProduto(QString preco)
{
//    double valor = preco.toDouble();
//    QSqlQuery query;
//    query.prepare("INSERT INTO produto(valor) values (:preco);");
//    query.bindValue(":preco",valor);
//    //query.exec();
//    if (!query.exec()){
//        return false;
//    } else {
//        return true;
//    }
    return true;
}

int bancoproduto::RetornaIdDoProdutoPelaDescricao(const QString &UsadaParaBuscarIdDoProduto)
{
    QSqlQuery query;
    query.prepare("SELECT id_produto FROM produto where produto = '" + UsadaParaBuscarIdDoProduto + "';");
    query.exec();
    int id;
    if(query.next())
        id = query.value("id_produto").toInt();

    return id;
}
