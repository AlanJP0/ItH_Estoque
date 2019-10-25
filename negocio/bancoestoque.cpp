#include "bancoestoque.h"
#include <QtSql>

bancoestoque::bancoestoque(QObject* parent) : QObject(parent)
{

}

//QList<Estoque *> bancoestoque::getEstoque()
//{
//    QSqlQuery buscaBanco;
//    buscaBanco.prepare("SELECT id_filial, id_prduto, base FROM filial");
//    buscaBanco.bindValue("id_filial", idFilial);
//    buscaBanco.bindValue("descricao_filial", idProduto);
//    buscaBanco.bindValue("base", base);
//    buscaBanco.exec();
//    while (buscaBanco.next())
//    {

//    }
//}


