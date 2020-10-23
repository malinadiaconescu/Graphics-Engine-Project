#include "Robot.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
Robot::Robot()
{
    A=Point(0,0);
}
Robot::Robot(Point x)
{
    A=x;
}
void Robot::Draw()
{
    Triangle(A,Point(A.getx()-5,A.gety()-10),Point(A.getx()+5,A.gety()-10)).Draw();
    Point(A.getx()-15,A.gety()+10).Draw();
    Point(A.getx()+15,A.gety()+10).Draw();
    Line(Point(A.getx()-15,A.gety()-20),Point(A.getx()+15,A.gety()-20)).Draw();
    Line(Point(A.getx()-35,A.gety()-60),Point(A.getx()-60,A.gety()-50)).Draw();
    Line(Point(A.getx()+35,A.gety()-60),Point(A.getx()+60,A.gety()-50)).Draw();
    Rectangle r=Rectangle(Point(A.getx()-30,A.gety()+30),60,-60);
    r.Draw();
    Rectangle r1=Rectangle(Point(A.getx()-35,A.gety()-40),70,-100);
    Line(Point(A.getx(),A.gety()-30),Point(A.getx(),A.gety()-40)).Draw();
    Line(Point(A.getx()-10,A.gety()-140),Point(A.getx()-10,A.gety()-180)).Draw();
    Line(Point(A.getx()+10,A.gety()-140),Point(A.getx()+10,A.gety()-180)).Draw();
    r1.Draw();
}
