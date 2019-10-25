#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <QObject>
#include "Secao.h"

class Categoria : public QObject
{
    Q_OBJECT
public:
    explicit Categoria(QObject * parent = nullptr);

    long long getIdcategoria() const;
    void setIdcategoria(long long value);

    QString getDescricao() const;
    void setDescricao(const QString &value);

    Secao *getSecao() const;
    void setSecao(Secao *value);

private:
    long long idcategoria;
    QString descricao;
    Secao* secao;
};

#endif // CATEGORIA_H
