#ifndef ESTOQUEDAO_H
#define ESTOQUEDAO_H

#include <QObject>
#include <QtSql/QSqlQuery>
#include "dominio/Estoque.h"
#include "negocio/bancoddados.h"

class EstoqueDAO : public QObject
{
    Q_OBJECT
public:
    explicit EstoqueDAO(QObject *parent = nullptr);

    QList<Estoque*> recuperaListEstoque(long long idFilial);

private:
    bancoddados _db;
};

#endif // ESTOQUEDAO_H
