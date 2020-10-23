#include "Point.h"
#include "EngineGlut.h"
Point::Point()
{
    x=0;y=0;
}
Point::Point(double a,double b)
{
    x=a;y=b;
}
Point::~Point()
{
}
void Point::Draw()
{
    this->e->drawPoint(x,y);
}
double Point::getx()
{
    return x;
}
double Point::gety()
{
    return y;
}
void Point::setx(double value)
{
    x=value;
}
void Point::sety(double value)
{
    y=value;
}
ostream & operator << (ostream &st, Point &A)
{
    st<<"The X coordinate of the point:"<<endl;
    st<<A.getx()<<endl<<"The Y coordinate of the point:"<<A.gety()<<endl;
    return st;
}
void Point::Print()
{
    cout<<this;
}
