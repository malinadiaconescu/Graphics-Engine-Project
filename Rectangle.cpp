#include "Rectangle.h"
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
Rectangle::Rectangle()
{
    A=Point(0,0);
    B=Point(0,0);
    C=Point(0,0);
    D=Point(0,0);
    ok=0;
}
Rectangle::~Rectangle()
{
    this->A.~Point();
    this->B.~Point();
    this->C.~Point();
    this->D.~Point();
}
Rectangle::Rectangle(Point X,double height, double width)
{
    A=X;
    B=Point(A.getx(),A.gety()+width);
    C=Point(A.getx()+height,A.gety()+width);
    D=Point(A.getx()+height,A.gety());
    ok=0;
}
void Rectangle::ChangeStyle()
{
    if(ok)
        ok=0;
    else
        ok=1;
}
void Rectangle::Draw()
{
    if(ok)
    {
        this->e->drawSurface(A.getx(),A.gety(),B.getx(),B.gety(),D.getx(),D.gety());
        this->e->drawSurface(B.getx(),B.gety(),C.getx(),C.gety(),D.getx(),D.gety());
    }
    else
    {
        this->e->drawLine(A.getx(),A.gety(),B.getx(),B.gety());
        this->e->drawLine(A.getx(),A.gety(),D.getx(),D.gety());
        this->e->drawLine(B.getx(),B.gety(),C.getx(),C.gety());
        this->e->drawLine(D.getx(),D.gety(),C.getx(),C.gety());
    }
}
Rectangle Rectangle::operator*(const double&a)
{
    Point O=Point((A.getx()+C.getx())/2,(A.gety()+C.gety())/2);
    this->A=Point(a*A.getx()-(a-1)*O.getx(), a*A.gety()-(a-1)*O.gety());
    this->B=Point(a*B.getx()-(a-1)*O.getx(), a*B.gety()-(a-1)*O.gety());
    this->C=Point(a*C.getx()-(a-1)*O.getx(), a*C.gety()-(a-1)*O.gety());
    this->D=Point(a*D.getx()-(a-1)*O.getx(), a*D.gety()-(a-1)*O.gety());
    return *this;
}
ostream & operator << (ostream &st, Rectangle &Dr)
{
    st<<"The coordinate of the points are:"<<endl;
    st<<Dr.A.getx()<<" "<<Dr.A.gety()<<endl;
    st<<Dr.B.getx()<<" "<<Dr.B.gety()<<endl;
    st<<Dr.C.getx()<<" "<<Dr.C.gety()<<endl;
    st<<Dr.D.getx()<<" "<<Dr.D.gety()<<endl;
    return st;
}
void Rectangle::Print()
{
    cout<<this;
}
