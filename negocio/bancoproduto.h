#ifndef BANCOPRODUTO_H
#define BANCOPRODUTO_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

class bancoproduto : public QObject
{
    Q_OBJECT
public:
    explicit bancoproduto(QObject * parent = nullptr);

    int getIdProduto() const;

    QString getDescricaoProduto(int id) const;
    bool inserirDescricaoProduto(const QString &value);

    QSqlDatabase db;

    double getValorProduto() const;
    bool defineValorProduto(QString preco);

    int RetornaIdDoProdutoPelaDescricao (const QString &UsadaParaBuscarIdDoProduto);

private:
    int id;
    QString descricao;
    QString preco;
    QString UsadaParaBuscarIdDoProduto;
};

#endif // BANCOPRODUTO_H
