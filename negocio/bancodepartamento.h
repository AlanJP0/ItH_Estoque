#ifndef BANCODEPARTAMENTO_H
#define BANCODEPARTAMENTO_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

class bancodepartamento : public QObject
{
    Q_OBJECT
public:
    explicit bancodepartamento(QObject * parent = nullptr);

    int getIDdepartamento();
    QString getDescricao();

private:
    int idDepartamento;
    QString descricao;
};

#endif // BANCODEPARTAMENTO_H
