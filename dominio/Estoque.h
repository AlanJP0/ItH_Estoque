#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Produto.h"
#include "Filial.h"

#include <QObject>

class Estoque : public QObject
{
    Q_OBJECT
public:
    Estoque(QObject * parent = nullptr);

    double getBase() const;
    void setBase(double value);

    Produto *getProduto() const;
    void setProduto(Produto *value);

    Filial *getFilial() const;
    void setFilial(Filial *value);

private:
    Produto * produto;
    Filial * filial;
    double base;
};

#endif // ESTOQUE_H
