#include <cmath> 
class MyPoint
{
  private:
    double a, b;
  public:
    MyPoint(){
        a = 0; b = 0;
       }
    MyPoint(double x, double y){
         a = x; b = y;
       }
    double getX(){
         return a;
       }
    double getY(){
         return b;
       }
    double distance(MyPoint &point){
         return sqrt((a-point.getX())*(a-point.getX()) + (b-point.getY())*(b-point.getY()));
       }
};