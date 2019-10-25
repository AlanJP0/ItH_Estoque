#include "estoquenegocio.h"
#include "dao/estoquedao.h"

EstoqueNegocio::EstoqueNegocio(QObject *parent) : QObject(parent)
{

}

QList<Estoque *> EstoqueNegocio::recuperaListEstoque(long long idFilial)
{
//    if(idFilial <= 0){
        //Erro filial invalida
//    }

    EstoqueDAO estoqueDAO;
    QList<Estoque *> listEstoque = estoqueDAO.recuperaListEstoque(idFilial);

//    if(listEstoque.isEmpty())
        //Erro lista vazia

    return listEstoque;
}
