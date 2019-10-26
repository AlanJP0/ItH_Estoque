#ifndef BOTAOPESQUISASECAO_H
#define BOTAOPESQUISASECAO_H

#include <QDialog>

namespace Ui {
class botaoPesquisaSecao;
}

class botaoPesquisaSecao : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisaSecao(QWidget *parent = nullptr);
    ~botaoPesquisaSecao();

private:
    Ui::botaoPesquisaSecao *ui;
};

#endif // BOTAOPESQUISASECAO_H
