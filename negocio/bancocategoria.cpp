#include "bancocategoria.h"
#include <QtSql>

bancocategoria::bancocategoria(QObject* parent) : QObject(parent)
{

}

QString bancocategoria::getDescricaoCategoria(int id) const
{
    QSqlQuery query;
    query.prepare("SELECT categoria FROM categoria where id_categoria = (:identificacao);"); //id depois
    query.bindValue(":identificacao", id);
    query.exec();
    QString descricaoCategoria;
    if (query.next()){
        descricaoCategoria = query.value("categoria").toString();
    }
    return descricaoCategoria;
}

bool bancocategoria::salvarDescricaoCategoria(QString descricao)
{
    QSqlQuery query;
    query.prepare("INSERT INTO categoria(categoria) values ('" + descricao + "');");

    if(!query.exec())
        return false;

    return true;
}
int bancocategoria::getIdCategoria() const
{
    return id;
}

int bancocategoria::RetornaIdAtravesdaDescricao(const QString &UsadaParaBuscarIdPelaDescricao)
{
    QSqlQuery query;
    query.prepare("SELECT id_categoria FROM categoria WHERE categoria = '" + UsadaParaBuscarIdPelaDescricao + "';");
    query.exec();

    int id;
    if(query.next())
    {
        id = query.value("id_categoria").toInt();
        return id;
    }else
    {
        return 0;
    }
}
