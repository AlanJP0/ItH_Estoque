#ifndef PRODUTO_H
#define PRODUTO_H

#include <QObject>
#include "dominio/Categoria.h"

class Produto : public QObject
{
    Q_OBJECT
public:
    explicit Produto(QObject * parent = nullptr);

    long long getIdProduto() const;
    void setIdProduto(long long value);

    QString getDescricao() const;
    void setDescricao(const QString &value);

    Categoria *getCategoria() const;
    void setCategoria(Categoria *value);

private:
    long long idProduto;
    QString descricao;
    Categoria* categoria = nullptr;
};

#endif // PRODUTO_H
