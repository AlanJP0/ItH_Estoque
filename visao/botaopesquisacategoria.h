#ifndef BOTAOPESQUISACATEGORIA_H
#define BOTAOPESQUISACATEGORIA_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class botaoPesquisaCategoria;
}

class botaoPesquisaCategoria : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaCategoria(QWidget *parent = nullptr);
    ~botaoPesquisaCategoria();

    void setConects();
    QString getId();

private:
    Ui::botaoPesquisaCategoria *ui;
    QString idFilial;

    void montarTWCategoria();

private slots:
    void configuracoesIniciais();
    void clicouEmFilial(QTableWidgetItem* item);
};

#endif // BOTAOPESQUISACATEGORIA_H
