#include "Triangle.h"
#include "EngineGlut.h"
#include "Line.h"
#include <iostream>
using namespace std;
Triangle::Triangle()
{
    this->A= Point(0,0);
    this->B= Point(0,0);
    this->C= Point(0,0);
    ok=0;
}
Triangle::Triangle(Point X,Point Y,Point Z)
{
    this->A=X;
    this->B=Y;
    this->C=Z;
    ok=0;
}
Triangle::~Triangle()
{
    this->A.~Point();
    this->B.~Point();
    this->C.~Point();
}
void Triangle::ChangeStyle()
{
    if(ok)
        ok=0;
    else ok=1;
}
void Triangle::Draw()
{
    if(ok)
    {
        this->e->drawSurface(this->A.getx(),this->A.gety(),this->B.getx(),this->B.gety(),this->C.getx(),this->C.gety());
    }
    else
    {
        this->e->drawLine(this->A.getx(),this->A.gety(),this->B.getx(),this->B.gety());
        this->e->drawLine(this->B.getx(),this->B.gety(),this->C.getx(),this->C.gety());
        this->e->drawLine(this->A.getx(),this->A.gety(),this->C.getx(),this->C.gety());
    }
}
Triangle Triangle::operator*(const double&a)
{
    this->B=Point(a*this->B.getx()-(a-1)*this->A.getx(), a*this->B.gety()-(a-1)*this->A.gety());
    this->C=Point(a*this->C.getx()-(a-1)*this->A.getx(), a*this->C.gety()-(a-1)*this->A.gety());
    return *this;
}
ostream & operator << (ostream &st, Triangle & T)
{
    st<<"The coordinates of the points are:"<<endl;
    st<<T.A.getx()<<" "<<T.A.gety()<<endl;
    st<<T.B.getx()<<" "<<T.B.gety()<<endl;
    st<<T.C.getx()<<" "<<T.C.gety()<<endl;
    return st;
}
void Triangle::Print()
{
    cout<<this;
}
