#ifndef SHAPE_H
#define SHAPE_H
#include "EngineGlut.h"

class Shape
{
    public:
    protected:
        EngineGlut * e;
        virtual void Draw();
        virtual void Print();
    private:
};

#endif // SHAPE_H
