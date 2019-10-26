#include "cadastrobasenegocio.h"

#include <dao/cadastrobasedao.h>

CadastroBaseNegocio::CadastroBaseNegocio(QObject *parent) : QObject(parent)
{

}

QList<Categoria*> CadastroBaseNegocio::buscarListCategoria()
{
    CadastroBaseDao cadastrobase;
    QList<Categoria*> categoria = cadastrobase.buscarListCategoria();

    return categoria;
}

QList<Departamento*> CadastroBaseNegocio::buscarListDepartamento()
{
    CadastroBaseDao cadastrobase;
    QList<Departamento*> departamento = cadastrobase.buscarListDepartamento();

    return departamento;
}

QList<Filial*> CadastroBaseNegocio::buscarListFilial()
{
    CadastroBaseDao cadastrobase;
    QList<Filial*> filial = cadastrobase.buscarListFilial();

    return filial;
}

QList<Produto*> CadastroBaseNegocio::buscarListProduto()
{
    CadastroBaseDao cadastrobase;
    QList<Produto*> produto = cadastrobase.buscarListProduto();

    return produto;
}

QList<Secao*> CadastroBaseNegocio::buscarListSecao()
{
    CadastroBaseDao cadastrobase;
    QList<Secao*> secao = cadastrobase.buscarListSecao();

    return secao;
}
