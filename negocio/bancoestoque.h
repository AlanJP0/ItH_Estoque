#ifndef BANCOESTOQUE_H
#define BANCOESTOQUE_H

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include "dominio/Estoque.h"

class bancoestoque : public QObject
{
    Q_OBJECT
public:
    explicit bancoestoque(QObject *parent = nullptr);

    QList<Estoque*> getEstoque();

private:
    int idProduto;
    int idFilial;
    double base;
};

#endif // BANCOESTOQUE_H
