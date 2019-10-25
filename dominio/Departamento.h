#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <QObject>

class Departamento : public QObject
{
public:
    Q_OBJECT
    public:
        explicit Departamento(QObject *parent = nullptr);

    long long getIdDepartamento() const;
    void setIdDepartamento(long long value);

    QString getDescricao() const;
    void setDescricao(const QString &value);

private:
    long long idDepartamento;
    QString descricao;
};

#endif // DEPARTAMENTO_H
