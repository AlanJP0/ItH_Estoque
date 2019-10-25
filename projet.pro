QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Relatorio.cpp \
    dao/cadastrobasedao.cpp \
    dao/estoquedao.cpp \
    dominio/Categoria.cpp \
    dominio/Departamento.cpp \
    dominio/Estoque.cpp \
    dominio/Filial.cpp \
    dominio/Produto.cpp \
    dominio/Secao.cpp \
    negocio/bancoddados.cpp \
    cadastro.cpp \
    main.cpp \
    mainwindow.cpp \
    negocio/cadastrobasenegocio.cpp \
    negocio/estoquenegocio.cpp

HEADERS += \
    Cadastro.h \
    Relatorio.h \
    dao/cadastrobasedao.h \
    dao/estoquedao.h \
    dominio/Categoria.h \
    dominio/Departamento.h \
    dominio/Estoque.h \
    dominio/Filial.h \
    dominio/Produto.h \
    dominio/Secao.h \
    negocio/bancoddados.h \
    mainwindow.h \
    negocio/cadastrobasenegocio.h \
    negocio/estoquenegocio.h

FORMS += \
    cadastro.ui \
    mainwindow.ui \
    relatorio.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
