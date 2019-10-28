#ifndef BOTAOPESQUISACATEGORIA_H
#define BOTAOPESQUISACATEGORIA_H

#include <QDialog>

namespace Ui {
class botaoPesquisaCategoria;
}

class botaoPesquisaCategoria : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaCategoria(QWidget *parent = nullptr);
    ~botaoPesquisaCategoria();

private:
    Ui::botaoPesquisaCategoria *ui;

    void montarTWCategoria();

private slots:
    void configuracoesIniciais();
};

#endif // BOTAOPESQUISACATEGORIA_H
