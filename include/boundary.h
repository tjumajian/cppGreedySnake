#ifndef Boundary_H
#define Boundary_H

#include <QGraphicsItem>
#include <QPainter>

class Boundary : public QGraphicsItem
{
public:
    Boundary();
    void setColor(const QColor &color);
    void setWidth(float width);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
private:
    QColor m_color;
    float m_width;
};

#endif // Boundary_H
