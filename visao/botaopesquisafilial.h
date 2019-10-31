#ifndef BOTAOPESQUISAFILIAL_H
#define BOTAOPESQUISAFILIAL_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class botaoPesquisaFilial;
}

class botaoPesquisaFilial : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaFilial(QWidget *parent = nullptr);
    ~botaoPesquisaFilial();
    void setConects();
    QString getId();

private:
    Ui::botaoPesquisaFilial *ui;
    void montarTWFilial();

    QString idFilial;

private slots:
    void configuracoesIniciais();
    void clicouEmFilial(QTableWidgetItem* item);

};

#endif // BOTAOPESQUISAFILIAL_H
