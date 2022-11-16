#ifndef DENEME_H
#define DENEME_H

#include <QObject>

class deneme : public QObject
{
    Q_OBJECT
public:
    explicit deneme(QObject *parent = nullptr);

signals:

};

#endif // DENEME_H
