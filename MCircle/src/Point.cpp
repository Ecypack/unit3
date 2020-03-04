#include <math.h>
#include "Point.h"
#include <iostream>
using namespace std;

//float Point::Getx()const
//{
//   return x;
//}

//float Point::Gety()const
//{
//    return y;
//}
void Point::Getxy()
{
    cout<<"point"<<"("<<x<<","<<y<<")";
}    //´òÓ¡µã×ø±ê

void Point::Setxy(float x,float y)
{
    this->x=x;
    this->y=y;
}

Point::Point(float x1,float y1):x(x1),y(y1)
{
    //ctor
}
