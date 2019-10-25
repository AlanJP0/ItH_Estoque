#include "Filial.h"
#include "Filial.h"

Filial::Filial(QObject *parent) : QObject(parent)
{

}

long long Filial::getIdFilial() const
{
    return idFilial;
}

void Filial::setIdFilial(long long value)
{
    idFilial = value;
}

QString Filial::getDescricao() const
{
    return descricao;
}

void Filial::setDescricao(const QString &value)
{
    descricao = value;
}
