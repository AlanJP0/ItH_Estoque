#ifndef BANCOSECAO_H
#define BANCOSECAO_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

class bancosecao : public QObject
{
    Q_OBJECT
public:
    explicit bancosecao(QObject * parent = nullptr);

    int getIDsecao();
    QString getDescricao();

private:
    int idSecao;
    QString descricao;
};

#endif // BANCOSECAO_H
