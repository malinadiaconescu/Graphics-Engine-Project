#ifndef LINE_H
#define LINE_H
#include "EngineGlut.h"
#include "Point.h"
#include "EngineGlut.h"
#include "Shape.h"
class Line:public Shape
{
    public:
        Line(Point ,Point );
        Line();
        virtual ~Line();
        void Draw();
        Line operator*(const double&a);
        friend ostream & operator << (ostream &, Line &);
        void Print();
    private:
        Point A;
        Point B;
};

#endif // LINE_H
