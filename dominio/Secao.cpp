#include "Secao.h"
#include "Departamento.h"

Secao::Secao(QObject *parent) : QObject(parent)
{

}

long long Secao::getIdSecao() const
{
    return idSecao;
}

void Secao::setIdSecao(long long value)
{
    idSecao = value;
}

QString Secao::getDescricao() const
{
    return descricao;
}

void Secao::setDescricao(const QString &value)
{
    descricao = value;
}

//departamento *Secao::getDepartamento() const
//{
//    return departamento;
//}

//void Secao::setDepartamento(departamento *value)
//{
//    departamento = value;
//}
