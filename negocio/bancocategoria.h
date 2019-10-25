#ifndef BANCOCATEGORIA_H
#define BANCOCATEGORIA_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

class bancocategoria : public QObject
{
    Q_OBJECT
public:
    explicit bancocategoria(QObject *parent = nullptr);

    QString getDescricaoCategoria(int id) const;

    bool salvarDescricaoCategoria(QString descricao);

    int getIdCategoria() const;
    QSqlDatabase db;

    int RetornaIdAtravesdaDescricao (const QString &UsadaParaBuscarIdPelaDescricao);

private:
    int id;
    QString descricao;
    QString UsadaParaBuscarIdPelaDescricao;
};

#endif // BANCOCATEGORIA_H
