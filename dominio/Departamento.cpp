#include "Departamento.h"

Departamento::Departamento(QObject *parent) : QObject(parent)
{

}

long long Departamento::getIdDepartamento() const
{
    return idDepartamento;
}

void Departamento::setIdDepartamento(long long value)
{
    idDepartamento = value;
}

QString Departamento::getDescricao() const
{
    return descricao;
}

void Departamento::setDescricao(const QString &value)
{
    descricao = value;
}
