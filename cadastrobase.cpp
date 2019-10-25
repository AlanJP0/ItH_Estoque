#include "Cadastrobase.h"

CadastroBase::CadastroBase(QObject *parent) : QObject(parent)
{

}

long long CadastroBase::getId() const
{
    return idFilial;
}

void CadastroBase::setId(long long value)
{
    idFilial = value;
}

QString CadastroBase::getCategoria() const
{
    return categoria;
}

void CadastroBase::setCategoria(const QString &value)
{
    categoria = value;
}

QString CadastroBase::getProduto() const
{
    return produto;
}

void CadastroBase::setProduto(const QString &value)
{
    produto = value;
}

double CadastroBase::getBase() const
{
    return base;
}

void CadastroBase::setBase(double value)
{
    base = value;
}


