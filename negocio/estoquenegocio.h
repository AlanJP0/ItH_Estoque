#ifndef ESTOQUENEGOCIO_H
#define ESTOQUENEGOCIO_H

#include <QObject>
#include "dominio/Estoque.h"

class EstoqueNegocio : public QObject
{
    Q_OBJECT
public:
    explicit EstoqueNegocio(QObject *parent = nullptr);

    QList<Estoque*> recuperaListEstoque(long long idFilial);

};

#endif // ESTOQUENEGOCIO_H
