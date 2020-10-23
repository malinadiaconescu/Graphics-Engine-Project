#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "Point.h"
class Airplane: public Shape
{
    public:
        Airplane();
        Airplane(Point );
        void Draw();
    private:
        Point A;
};

#endif // AIRPLANE_H
