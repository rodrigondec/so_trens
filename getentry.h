#ifndef GETENTRY_H
#define GETENTRY_H

#include <QThread>

class getEntry: public QThread{
Q_OBJECT;
public:
    getEntry();
    ~getEntry();
    void read();
signals:
    void entry(int, int, bool);
};

#endif // GETENTRY_H
