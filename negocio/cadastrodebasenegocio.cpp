
#include "cadastrodebasenegocio.h"
#include "Cadastrobase.h"
#include "qdebug.h"
#include <QtSql>

CadastrodeBaseNegocio::CadastrodeBaseNegocio(QObject *parent) : QObject(parent)
{

}

void CadastrodeBaseNegocio::salvarCadastroBase(CadastroBase *cadastroBase)
{
    if(cadastroBase == nullptr){
//        this->setLastErro():
        qDebug() << "Cadastro de base invalido";
        return;
    }

    if(cadastroBase->getCategoria().isEmpty())
    {
        qDebug() << "Cadastro de base invalido";
        return;
    }

    if(cadastroBase->getProduto().isEmpty())
    {
            qDebug() << "Cadastro de base invalido";
            return;
    }
}


