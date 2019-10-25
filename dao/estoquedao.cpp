#include "estoquedao.h"
#include <QtSql/QSqlQuery>
#include <QVariant>
#include <QDebug>
#include "negocio/bancoddados.h"


EstoqueDAO::EstoqueDAO(QObject *parent) : QObject(parent)
{

}

QList<Estoque *> EstoqueDAO::recuperaListEstoque(long long idFilial)
{
    qDebug()<< idFilial;
//    QString sql = " select produto.id_produto, descricao_produto, filial.id_filial, descricao_filial, produto.id_categoria, descricao_categoria, base from estoque "
//                  " inner join filial on filial.id_filial = estoque.id_filial "
//                  " inner join produto on produto.id_produto = estoque.id_produto "
//                  " inner join categoria on categoria.id_categoria = produto.id_categoria ";
//                  /*" where filial.id_filial = " + QString::number(idFilial);*/

    QString sql = "select * from filial";

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
