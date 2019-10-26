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
    QList<Categoria*> buscarListCategoria();
    QList<Departamento*> buscarListDepartamento();
//    QList<Estoque>
    QList<Filial*> buscarListFilial();
    QList<Produto*> buscarListProduto();
    QList<Secao*> buscarListSecao();
};

#endif // CADASTROBASENEGOCIO_H
