#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"
#include "Shape.h"
class Triangle: public Shape
{
    public:
        Triangle();
        Triangle(Point , Point , Point );
        virtual ~Triangle();
        void Draw();
        void ChangeStyle();
        Triangle operator*(const double&a);
        friend ostream & operator << (ostream &, Triangle &);
        void Print();
    private:
        Point A, B, C;
        bool ok;
};
#endif // TRIANGLE_H
