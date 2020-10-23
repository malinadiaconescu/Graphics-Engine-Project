#include "Line.h"
#include "Point.h"
#include <iostream>
using namespace std;
Line::Line(Point X,Point Y)
{
   this->A=X;
   this->B=Y;
}
Line::~Line()
{
    this->A.~Point();
    this->B.~Point();
}
void Line::Draw()
{
    this->e->drawLine(this->A.getx(),this->A.gety(),this->B.getx(),this->B.gety());
}
Line Line::operator*(const double&a)
{
    this->B=Point(a*this->B.getx()-(a-1)*this->A.getx(), a*this->B.gety()-(a-1)*this->A.gety());
    return *this;
}
ostream & operator << (ostream &st, Line &L)
{
    st<<"The coordinates of the points are:"<<endl;
    st<<L.A.getx()<<" "<<L.A.gety()<<endl;
    st<<L.B.getx()<<" "<<L.B.getx()<<endl;
    return st;
}
void Line::Print()
{
   cout<<this;
}
