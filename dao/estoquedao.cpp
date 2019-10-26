#include "estoquedao.h"
#include <QtSql/QSqlQuery>
#include <QVariant>
#include <QDebug>
#include "negocio/bancoddados.h"


EstoqueDAO::EstoqueDAO(QObject *parent) : QObject(parent)
{

}

QList<Estoque *> EstoqueDAO::recuperaListEstoque()
{

    QString sql =  " select estoque.testeestoque.produto.id_produto,"
                   " estoque.testeestoque.produto.descricao_produto,"
                   " estoque.testeestoque.filial.id_filial,"
                   " estoque.testeestoque.filial.descricao_filial,"
                   " estoque.testeestoque.produto.id_categoria,"
                   " estoque.testeestoque.categoria.descricao_categoria,"
                   " estoque.testeestoque.estoque.base"
                   " from estoque.testeestoque.estoque"
                   " inner join estoque.testeestoque.filial"
                   " on estoque.testeestoque.filial.id_filial = estoque.testeestoque.estoque.id_filial"
                   " inner join estoque.testeestoque.produto"
                   " on estoque.testeestoque.produto.id_produto = estoque.testeestoque.estoque.id_produto"
                   " inner join estoque.testeestoque.categoria"
                   " on estoque.testeestoque.categoria.id_categoria = estoque.testeestoque.produto.id_categoria";


    QSqlQuery query;
    query.prepare(sql);
    if(!query.exec()){
        qDebug() << "Nao executou" << query.lastError().text();
    }
        qDebug() << query.executedQuery();

    QList<Estoque*> listEstoque;
    while(query.next()){
        Estoque* estoque = new Estoque;
        estoque->setBase(query.value("base").toDouble());

        Filial* filial = new Filial;
        filial->setIdFilial(query.value("id_filial").toLongLong());
        filial->setDescricao(query.value("descricao_filial").toString());
        qDebug() << query.value("id_filial").toLongLong();
        qDebug() << query.value("descricao_filial").toString();
        estoque->setFilial(filial);
        Produto* produto = new Produto;
        produto->setIdProduto(query.value("id_produto").toLongLong());
        produto->setDescricao(query.value("descricao_produto").toString());
        qDebug() << query.value("id_produto").toLongLong();
        qDebug() << query.value("descricao_produto").toString();
        Categoria* categoria = new Categoria;
        categoria->setIdcategoria(query.value("id_categoria").toLongLong());
        categoria->setDescricao(query.value("descricao_categoria").toString());
        qDebug() << query.value("id_categoria").toLongLong();
        qDebug() << query.value("descricao_categoria").toString();
        produto->setCategoria(categoria);
        estoque->setProduto(produto);

        qDebug() << "Alan estoque" << estoque;
        qDebug() << "Alan produto" << produto;

        listEstoque << estoque;
    }

    return listEstoque;
}
