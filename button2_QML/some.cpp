#include "some.h"
//#include <QTimer>
Some::Some(QObject *parent)
    : QObject{parent}
{

               connect(&time,&QTimer::timeout,this,&Some::stop);
               color="starting";
               time.setInterval(5000);
               emit notice(QVariant(color));


}
void Some:: start() {

           time.start();

           color="starting";
           emit notice(QVariant(color));

}
void Some::stop() {
           color="timeout";
           emit notice(QVariant(color));

    }
