#ifndef CADASTROBASENEGOCIO_H
#define CADASTROBASENEGOCIO_H

#include <QObject>

#include <dominio/Categoria.h>
#include <dominio/Filial.h>
#include <dominio/Produto.h>

class CadastroBaseNegocio : public QObject
{
    Q_OBJECT
public:
    explicit CadastroBaseNegocio(QObject *parent = nullptr);
QList<Categoria*> buscarIdCategorai(int idBusca);
    Departamento* buscarIdDepartametno(int idBusca);
//    QList<Estoque>
    Filial* buscarIdFilial(int idBusca);
    Produto* buscarIdProduto(int idBusca);
    Secao* buscarIdSecao(int idBusca);
};

#endif // CADASTROBASENEGOCIO_H
