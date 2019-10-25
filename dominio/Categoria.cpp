#include "Categoria.h"
#include "Secao.h"

Categoria::Categoria(QObject *parent) : QObject(parent)
{

}

long long Categoria::getIdcategoria() const
{
    return idcategoria;
}

void Categoria::setIdcategoria(long long value)
{
    idcategoria = value;
}

QString Categoria::getDescricao() const
{
    return descricao;
}

void Categoria::setDescricao(const QString &value)
{
    descricao = value;
}

Secao *Categoria::getSecao() const
{
    return secao;
}

void Categoria::setSecao(Secao *value)
{
    secao = value;
}

