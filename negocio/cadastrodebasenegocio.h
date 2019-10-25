#ifndef CADASTRODEBASENEGOCIO_H
#define CADASTRODEBASENEGOCIO_H
#include "Cadastrobase.h"

#include <QObject>

class CadastrodeBaseNegocio : public QObject
{
    Q_OBJECT
public:
    explicit CadastrodeBaseNegocio(QObject *parent = nullptr);

    void salvarCadastroBase(CadastroBase* cadastroBase);

    QList<CadastroBase*> receberCadastroBase(long long idFilial);

signals:

public slots:
};

#endif // CADASTRODEBASENEGOCIO_H
