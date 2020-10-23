#include "Airplane.h"
#include "Triangle.h"
#include "Point.h"
#include "Line.h"
Airplane::Airplane()
{
    A=Point(0,298);
}
Airplane::Airplane(Point x)
{
   A=x;
}
void Airplane::Draw()
{
   Point(A.getx()-150,A.gety()-150).Draw();
   Point(A.getx()+150,A.gety()-150).Draw();
   Triangle(A,Point(A.getx()-100,A.gety()-100),Point(A.getx()+100,A.gety()-100)).Draw();
   Line(Point(A.getx()-200,A.gety()-100), Point(A.getx()+200,A.gety()-100)).Draw();
   Line(Point(A.getx()-200,A.gety()-100),Point(A.getx()-200,A.gety()-200)).Draw();
   Line(Point(A.getx()+200,A.gety()-100),Point(A.getx()+200,A.gety()-200)).Draw();
   Line(Point(A.getx()-200,A.gety()-100),Point(A.getx()+200,A.gety()-200)).Draw();
   Line(Point(A.getx()-200,A.gety()-200), Point(A.getx()+200,A.gety()-200)).Draw();
   Line(Point(A.getx()-100,A.gety()-200),Point(A.getx()-100,A.gety()-400)).Draw();
   Line(Point(A.getx()+100,A.gety()-200),Point(A.getx()+100,A.gety()-400)).Draw();

   Line(Point(A.getx()-150,A.gety()-400),Point(A.getx()+150,A.gety()-400)).Draw();
   Line(Point(A.getx()-150,A.gety()-400),Point(A.getx()-150,A.gety()-450)).Draw();
   Line(Point(A.getx()+150,A.gety()-400),Point(A.getx()+150,A.gety()-450)).Draw();
   Line(Point(A.getx()-150,A.gety()-400),Point(A.getx()+150,A.gety()-450)).Draw();
   Line(Point(A.getx()-150,A.gety()-450),Point(A.getx()+150,A.gety()-450)).Draw();
}
