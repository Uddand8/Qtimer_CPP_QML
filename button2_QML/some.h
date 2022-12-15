#ifndef SOME_H
#define SOME_H

#include <QObject>
#include <QWidget>

#include <QString>

#include <QTimer>

class Some : public QObject
{
    Q_OBJECT
public:
 Some(QObject *parent = nullptr);


signals:
        void notice(QVariant data);
//      void valueChange(Qstring s);

public slots:


    void start();
    void stop();
private:
    QTimer time;
    QString color;

//    void valueChanged(int a);

};

#endif // SOME_H
