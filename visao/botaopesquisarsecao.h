#ifndef BOTAOPESQUISARSECAO_H
#define BOTAOPESQUISARSECAO_H

#include <QDialog>

namespace Ui {
class botaoPesquisarSecao;
}

class botaoPesquisarSecao : public QDialog
{
    Q_OBJECT

public:
    explicit botaoPesquisarSecao(QWidget *parent = nullptr);
    ~botaoPesquisarSecao();

private:
    Ui::botaoPesquisarSecao *ui;
};

#endif // BOTAOPESQUISARSECAO_H
