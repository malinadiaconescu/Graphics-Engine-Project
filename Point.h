#ifndef POINT_H
#define POINT_H
#include "Shape.h"
#include <iostream>
using namespace std;
class Point: public Shape
{
    public:
        Point();
        Point(double , double );
        virtual ~Point();
        void Draw();
        double getx();
        double gety();
        void setx(double);
        void sety(double);
        friend ostream & operator << (ostream &, Point &);
        void Print();
    private:
        double x;double y;
};
#endif // POINT_H
