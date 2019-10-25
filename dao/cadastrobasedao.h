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

    QList<Categoria*> buscarIdCategoria(int idBusca);
    Departamento* buscarIdDepartameto(int idBusca);
//    QList<Estoque>
    Filial* buscarIdFilial(int idBusca);
    Produto* buscarIdProduto(int idBusca);
    Secao* buscarIdSecao(int idBusca);

};

#endif // CADASTROBASEDAO_H
