#ifndef RELATORIO_H
#define RELATORIO_H

#include <QWidget>

namespace Ui {
class Relatorio;
}

class Relatorio : public QWidget
{
    Q_OBJECT

public:
    explicit Relatorio(QWidget *parent = nullptr);
    ~Relatorio();

private:
    Ui::Relatorio *ui;

    void montarTw();

private slots:
    void configuracoesInicais();
    void clicouCadastrar();
    void clicouRelatorio();
};

#endif // RELATORIO_H
