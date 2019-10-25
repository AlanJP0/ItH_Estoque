#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Relatorio.h"

#include <negocio/bancoddados.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Relatorio* relatorio = new Relatorio;
    relatorio->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

