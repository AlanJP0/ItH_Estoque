#include "cadastrobasenegocio.h"

#include <dao/cadastrobasedao.h>

CadastroBaseNegocio::CadastroBaseNegocio(QObject *parent) : QObject(parent)
{

}

QList<Categoria*> CadastroBaseNegocio::buscarIdCategorai(int idBusca)
{
    CadastroBaseDao cadastrobase;
    QList<Categoria*> categoria = cadastrobase.buscarIdCategoria(idBusca);

    return categoria;
}

Departamento *CadastroBaseNegocio::buscarIdDepartametno(int idBusca)
{
    CadastroBaseDao cadastrobase;
    Departamento* departamento = cadastrobase.buscarIdDepartameto(idBusca);

    return departamento;
}

Filial *CadastroBaseNegocio::buscarIdFilial(int idBusca)
{
    CadastroBaseDao cadastrobase;
    Filial* filial = cadastrobase.buscarIdFilial(idBusca);

    return filial;
}

Produto *CadastroBaseNegocio::buscarIdProduto(int idBusca)
{
    CadastroBaseDao cadastrobase;
    Produto* produto = cadastrobase.buscarIdProduto(idBusca);

    return produto;
}

Secao *CadastroBaseNegocio::buscarIdSecao(int idBusca)
{
    CadastroBaseDao cadastrobase;
    Secao* secao = cadastrobase.buscarIdSecao(idBusca);

    return secao;
}
