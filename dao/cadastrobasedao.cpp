#include "cadastrobasedao.h"
#include <QtSql>
#include <QDebug>

CadastroBaseDao::CadastroBaseDao(QObject *parent) : QObject(parent)
{

}

QList<Categoria*> CadastroBaseDao::buscarIdCategoria(int idBusca)
{
    QString sql = " select id_categoria, descricao_categoria from categoria where id_categoria = " + QString::number(idBusca);

    QSqlQuery query;
    query.prepare(sql);
    QList<Categoria*> listcategoria;
    while(query.exec()){

        Categoria * categoria = new Categoria;
        categoria->setIdcategoria(query.value("id_categoria").toLongLong());
        categoria->setDescricao(query.value("descricao_categoria").toString());

        listcategoria << categoria;
    }

    return listcategoria;
}

Departamento* CadastroBaseDao::buscarIdDepartameto(int idBusca)
{
    QString sql = " select id_departamento, descrica_departamento from departamento where id_departamento =" + QString::number(idBusca);

    QSqlQuery query;
    query.prepare(sql);

    if(!query.exec()){
        qDebug() << "query nao executada" << query.lastError();
    }

    Departamento* departamento = new Departamento;
    departamento->setIdDepartamento(query.value("id_departamento").toLongLong());
    departamento->setDescricao(query.value("descricao_departamento").toString());

    return departamento;
}

Filial *CadastroBaseDao::buscarIdFilial(int idBusca)
{
    QString sql = " select id_filial, descrica_filial from filial where id_filial =" + QString::number(idBusca);

    QSqlQuery query;
    query.prepare(sql);

    if(!query.exec()){
        qDebug() << "query nao executada" << query.lastError();
    }

    Filial* filial = new Filial;
    filial->setIdFilial(query.value("id_filial").toLongLong());
    filial->setDescricao(query.value("descricao_filial").toString());

    return filial;
}

Produto *CadastroBaseDao::buscarIdProduto(int idBusca)
{
    QString sql = " select id_produto, descrica_produto from produto where id_produto =" + QString::number(idBusca);

    QSqlQuery query;
    query.prepare(sql);

    if(!query.exec()){
        qDebug() << "query nao executada" << query.lastError();
    }

    Produto* produto = new Produto;
    produto->setIdProduto(query.value("id_produto").toLongLong());
    produto->setDescricao(query.value("descricao_produto").toString());

    return produto;
}

Secao *CadastroBaseDao::buscarIdSecao(int idBusca)
{
    QString sql = " select id_secao, descrica_secao from secao where id_secao =" + QString::number(idBusca);

    QSqlQuery query;
    query.prepare(sql);

    if(!query.exec()){
        qDebug() << "query nao executada" << query.lastError();
    }

    Secao* secao = new Secao;
    secao->setIdSecao(query.value("id_secao").toLongLong());
    secao->setDescricao(query.value("descricao_secao").toString());

    return secao;
}
