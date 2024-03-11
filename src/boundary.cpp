#include "./include/boundary.h"

Boundary::Boundary()
{
    m_color = Qt::lightGray;
    m_width = 10.0;
}

void Boundary::setColor(const QColor &color)
{
    m_color = color;
    update();
}

QRectF Boundary::boundingRect() const
{
    qreal penWidth = 2;
    return QRectF(-m_width / 2 - penWidth / 2, -m_width / 2 - penWidth / 2,
                  m_width + penWidth, m_width + penWidth);
}

void Boundary::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->save();

    QPen pen(m_color, m_width);
    painter->setPen(pen);
    painter->drawRect(boundingRect());

    painter->drawLine(0, 0, boundingRect().width(), boundingRect().height()); // just test. ignore it!

    painter->restore();
}