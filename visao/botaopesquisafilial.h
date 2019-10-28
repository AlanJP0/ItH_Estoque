#ifndef BOTAOPESQUISAFILIAL_H
#define BOTAOPESQUISAFILIAL_H

#include <QDialog>

namespace Ui {
class botaoPesquisaFilial;
}

class botaoPesquisaFilial : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaFilial(QWidget *parent = nullptr);
    ~botaoPesquisaFilial();

private:
    Ui::botaoPesquisaFilial *ui;

    void montarTWFilial();

private slots:
    void configuracoesIniciais();

};

#endif // BOTAOPESQUISAFILIAL_H
