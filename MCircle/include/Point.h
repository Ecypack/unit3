#ifndef POINT_H
#define POINT_H


class Point
{
  private:
      float x, y;
  public:
      Point(float x=0.0, float y=0.0);
//      float Getx();
//      float Gety();

      void Getxy( );
      void Setxy(float,float);
};


#endif // POINT_H
