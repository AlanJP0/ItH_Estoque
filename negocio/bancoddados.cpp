#include "bancoddados.h"
#include "dao/ligarbanco.h"

bancoddados::bancoddados()
{
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QPSQL");
    bancoDeDados.setDatabaseName("estoque");
    bancoDeDados.setHostName("localhost");
    bancoDeDados.setUserName("postgres");
    bancoDeDados.setPassword("608600");
    bancoDeDados.setPort(5432);

    if(bancoDeDados.open()){
        qDebug() << "banco aberto";
    }else{
        qDebug() << "Erro abertura de Banco";
    }
}

