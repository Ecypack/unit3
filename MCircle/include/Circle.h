#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle:public Point
{
    public:
//        void Getxy( ) const;
        float Getr() const;
//        float findc() const;
//        float finds() const;
        void Display();
        void SetCircle(float,float,float);
        Circle();
        Circle(float,float,float);
        virtual ~Circle();
    private:
        float r;
};

#endif // CIRCLE_H

