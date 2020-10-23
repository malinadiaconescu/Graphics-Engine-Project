#include <iostream>
#include <unistd.h>
#include <math.h>
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Airplane.h"
#include "Robot.h"
void test_zoom_linie()
{
    Line l=Line(Point(0,0),Point(50,50))*2;
    Line(Point(0,0),Point(50,50)).Draw();
    l.Draw();
}
void test_zoom_triangle()
{
    Triangle(Point(0,0),Point(50,50),Point(50,100)).Draw();
    Triangle t=Triangle(Point(0,0),Point(50,50),Point(50,100))*2;
    t.Draw();
}
void test_zoom_rectangle()
{
    Rectangle(Point(0,0),50,50).Draw();
    Rectangle r=Rectangle(Point(0,0),50,50)*2;
    r.Draw();
}
int main(int argc, char ** argv)
{
    initEngineGlut(argc, argv);
    //Airplane().Draw();
    //Robot().Draw();
    //test_zoom_linie();
    //test_zoom_triangle();
    //test_zoom_rectangle();
    std::cin.ignore();
}
