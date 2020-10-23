#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
#include "Shape.h"
class Rectangle: public Shape
{
    private:
        Point A,B,C,D;
        bool ok;
    public:
        Rectangle();
        Rectangle(Point ,double , double );
        virtual ~Rectangle();
        void Draw();
        void ChangeStyle();
        Rectangle operator*(const double&a);
        friend ostream & operator << (ostream &, Rectangle &);
        void Print();
};

#endif // RECTANGLE_H
