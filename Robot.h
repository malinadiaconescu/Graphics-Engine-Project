#ifndef ROBOT_H
#define ROBOT_H
#include "Point.h"

class Robot
{
    public:
        Robot();
        Robot(Point x);
        void Draw();
    private:
        Point A;

};

#endif // ROBOT_H
