#ifndef BANCOFILIAL_H
#define BANCOFILIAL_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include "dominio/Filial.h"

class bancofilial : public QObject
{
    Q_OBJECT
public:
    bancofilial(QObject * parent);

private:
    int idFilial;
    QString descricao;
};

#endif // BANCOFILIAL_H
