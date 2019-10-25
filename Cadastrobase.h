#ifndef CADASTROBASE_H
#define CADASTROBASE_H

#include <QObject>

class CadastroBase : public QObject
{
    Q_OBJECT
public:
    explicit CadastroBase(QObject *parent = nullptr);

    long long getId() const;
    void setId(long long value);

    QString getCategoria() const;
    void setCategoria(const QString &value);

    QString getProduto() const;
    void setProduto(const QString &value);

    double getBase() const;
    void setBase(double value);

private:
    long long idFilial;
    QString categoria;
    QString produto;
    double base;
};

#endif // CADASTROBASE_H
