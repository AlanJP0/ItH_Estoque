#include "cadastrobasedao.h"
#include <QtSql>
#include <QDebug>

CadastroBaseDao::CadastroBaseDao(QObject *parent) : QObject(parent)
{

}

QList<Categoria*> CadastroBaseDao::buscarListCategoria()
{
    QString sql = " select estoque.testeestoque.categoria.id_categoria, estoque.testeestoque.categoria.descricao_categoria from estoque.testeestoque.categoria ";

    QSqlQuery query;
    query.prepare(sql);

    QList<Categoria*> listcategoria;

    if(!query.exec())
        qDebug() << "Query categoria ERRO" << query.lastError().text();
    while(query.next()){

        Categoria * categoria = new Categoria;
        categoria->setIdcategoria(query.value("id_categoria").toLongLong());
        categoria->setDescricao(query.value("descricao_categoria").toString());

        listcategoria << categoria;
    }

    return listcategoria;
}

QList<Departamento*> CadastroBaseDao::buscarListDepartamento()
{
    QString sql = " select estoque.testeestoque.departamento.id_departamento, estoque.testeestoque.departamento.descricao_departamento from estoque.testeestoque.departamento" ;

    QSqlQuery query;
    query.prepare(sql);

    QList<Departamento*> listdepartamento;

    if(!query.exec())
        qDebug() << "Query Departamento ERRO" << query.lastError().text();
    while(query.next()){

        Departamento* departamento = new Departamento;
        departamento->setIdDepartamento(query.value("id_departamento").toLongLong());
        departamento->setDescricao(query.value("descricao_departamento").toString());

        listdepartamento << departamento;
    }

    return listdepartamento;
}

QList<Filial*> CadastroBaseDao::buscarListFilial()
{
    QString sql = " select estoque.testeestoque.filial.id_filial, descricao_filial, estoque.testeestoque.filial.descricao_filial from estoque.testeestoque.filial" ;

    QSqlQuery query;
    query.prepare(sql);

    QList<Filial*> listfilial;

    if(!query.exec())
        qDebug() << "Query filial ERRO" << query.lastError().text();
    while(query.next()){

        Filial* filial = new Filial;
        filial->setIdFilial(query.value("id_filial").toLongLong());
        filial->setDescricao(query.value("descricao_filial").toString());

        listfilial << filial;
    }

    return listfilial;
}

QList<Produto*> CadastroBaseDao::buscarListProduto()
{
    QString sql = " select estoque.testeestoque.produto.id_produto, estoque.testeestoque.produto.descricao_produto from estoque.testeestoque.produto ";

    QSqlQuery query;
    query.prepare(sql);

    QList<Produto*> listproduto;

    if(!query.exec())
        qDebug() << "Query produto ERRO" << query.lastError().text();
    while(query.next()){

        Produto* produto = new Produto;
        produto->setIdProduto(query.value("id_produto").toLongLong());
        produto->setDescricao(query.value("descricao_produto").toString());

        listproduto << produto;
    }



    return listproduto;
}

QList<Secao*> CadastroBaseDao::buscarListSecao()
{
    qDebug() << "Chegou em buscarListSecao";
    QString sql = " select estoque.testeestoque.secao.id_secao, estoque.testeestoque.secao.descricao_secao from estoque.testeestoque.secao ";

    QSqlQuery query;
    query.prepare(sql);

    QList<Secao*> listsecao;

    if(!query.exec())
        qDebug() << "Query secao ERRO" << query.lastError().text();
    while(query.next()){

        Secao* secao = new Secao;
        secao->setIdSecao(query.value("id_secao").toLongLong());
        secao->setDescricao(query.value("descricao_secao").toString());

        listsecao << secao;
    }



    return listsecao;
}
