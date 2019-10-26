#include "cadastrobasedao.h"
#include <QtSql>
#include <QDebug>

CadastroBaseDao::CadastroBaseDao(QObject *parent) : QObject(parent)
{

}

QList<Categoria*> CadastroBaseDao::buscarListCategoria()
{
    QString sql = " select id_categoria, descricao_categoria from categoria ";

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

QList<Departamento*> CadastroBaseDao::buscarListDepartamento()
{
    QString sql = " select id_departamento, descrica_departamento from departamento" ;

    QSqlQuery query;
    query.prepare(sql);

    QList<Departamento*> listdepartamento;

    while(query.exec()){

        Departamento* departamento = new Departamento;
        departamento->setIdDepartamento(query.value("id_departamento").toLongLong());
        departamento->setDescricao(query.value("descricao_departamento").toString());

        listdepartamento << departamento;
    }

    return listdepartamento;
}

QList<Filial*> CadastroBaseDao::buscarListFilial()
{
    QString sql = " select estoque.testeestoque.id_filial, estoque.testeestoque.descrica_filial from estoque.testeestoque.filial " ;

    QSqlQuery query;
    query.prepare(sql);

    QList<Filial*> listfilial;
    while(query.exec()){

        Filial* filial = new Filial;
        filial->setIdFilial(query.value("id_filial").toLongLong());
        filial->setDescricao(query.value("descricao_filial").toString());

        listfilial << filial;
    }

    return listfilial;
}

QList<Produto*> CadastroBaseDao::buscarListProduto()
{
    QString sql = " select estoque.testeestoque.id_produto, estoque.testeestoque.descrica_produto from estoque.testeestoque.produto ";

    QSqlQuery query;
    query.prepare(sql);

    QList<Produto*> listproduto;

    while(query.exec()){

        Produto* produto = new Produto;
        produto->setIdProduto(query.value("id_produto").toLongLong());
        produto->setDescricao(query.value("descricao_produto").toString());

        listproduto << produto;
    }



    return listproduto;
}

QList<Secao*> CadastroBaseDao::buscarListSecao()
{
    QString sql = " select estoque.testeestoque.id_secao, estoque.testeestoque.descrica_secao from secao ";

    QSqlQuery query;
    query.prepare(sql);

    QList<Secao*> listsecao;

    while(query.exec()){

        Secao* secao = new Secao;
        secao->setIdSecao(query.value("id_secao").toLongLong());
        secao->setDescricao(query.value("descricao_secao").toString());

        listsecao << secao;
    }



    return listsecao;
}
