#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>
#include <QMediaPlayer>

class Bullet : public QObject, public QGraphicsRectItem {
    Q_OBJECT
public:
    Bullet(QGraphicsItem * parent=0);
public slots:
    void move();
private:
    QMediaPlayer * explosion;
};

#endif // BULLET_H
