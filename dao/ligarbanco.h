#ifndef LIGARBANCO_H
#define LIGARBANCO_H

#include <QObject>

class LigarBanco : public QObject
{
    Q_OBJECT
public:
    explicit LigarBanco(QObject *parent = nullptr);

};

#endif // LIGARBANCO_H
