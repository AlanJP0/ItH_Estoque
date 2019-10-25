#ifndef SECAO_H
#define SECAO_H

#include <QObject>
#include "dominio/Departamento.h"

class Secao : public QObject
{
    Q_OBJECT

public:
    explicit Secao(QObject * parent = nullptr);

    long long getIdSecao() const;
    void setIdSecao(long long value);

    QString getDescricao() const;
    void setDescricao(const QString &value);

    Departamento *getDepartamento() const;
    void setDepartamento(Departamento *value);

private:
    long long idSecao;
    QString descricao;
    Departamento * departamento;
};

#endif // SECAO_H
