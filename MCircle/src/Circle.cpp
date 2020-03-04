#include "Circle.h"
#include "Point.h"
#include <iostream>
using namespace std;
Circle::Circle(){}
Circle::Circle(float x,float y,float r):Point(x,y)
{
    this->r=r;
}

void Circle::SetCircle(float x,float y,float r)
{
    this->Point::Setxy(x,y);
    this->r=r;
}


Circle::~Circle(){}

float Circle::Getr()const
{
    return r;
}

void Circle::Display()
{
    Getxy();
    cout<<" r = "<<r<<endl;
}
