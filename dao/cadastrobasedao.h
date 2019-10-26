#ifndef CADASTROBASEDAO_H
#define CADASTROBASEDAO_H

#include <QObject>

#include "dominio/Categoria.h"
#include "dominio/Departamento.h"
#include "dominio/Estoque.h"
#include "dominio/Filial.h"
#include "dominio/Produto.h"
#include "dominio/Secao.h"

class CadastroBaseDao : public QObject
{

    Q_OBJECT
public:
    explicit CadastroBaseDao(QObject *parent = nullptr);

    QList<Categoria*> buscarListCategoria();
    QList<Departamento*> buscarListDepartamento();
//    QList<Estoque>
    QList<Filial*> buscarListFilial();
    QList<Produto*> buscarListProduto();
    QList<Secao*> buscarListSecao();

};

#endif // CADASTROBASEDAO_H
