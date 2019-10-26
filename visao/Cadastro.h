#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>
#include <QtSql>


namespace Ui {
class Cadastro;
}

class Cadastro : public QWidget
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

public slots:


private:
    Ui::Cadastro *ui;

    QString dadoProduto ;
    double dadoBase;

    void configuracaoInicial();

private slots:
    void clicouLePesquisarFilial();
    void clicouLePesquisarDepartamento();
    void clicouLePesquisarSecao();
    void clicouLePesquisarCategoria();
    void clicouLePesquisarProduto();
    void clicouLePesquisarBase();
    void clicouLeSalvar();
    void clicouLeLimpar();

    void on_pbSalvar_clicked();
};

#endif // CADASTRO_H
