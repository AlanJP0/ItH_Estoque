#include "Estoque.h"

Estoque::Estoque(QObject *parent) : QObject(parent)
{

}

double Estoque::getBase() const
{
    return base;
}

void Estoque::setBase(double value)
{
    base = value;
}

Produto *Estoque::getProduto() const
{
    return produto;
}

void Estoque::setProduto(Produto *value)
{
    produto = value;
}

Filial *Estoque::getFilial() const
{
    return filial;
}

void Estoque::setFilial(Filial *value)
{
    filial = value;
}
