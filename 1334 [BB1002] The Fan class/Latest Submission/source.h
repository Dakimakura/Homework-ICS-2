#include <string>
using namespace std;

class Fan {
   private:
    int speed;
    bool on;
    double r;
    string color;
   public:
   Fan(){
       speed = 1;
       on = false;
       r = 5;
       color = "blue";
     }
   int getSpeed(){
       return speed;
     }
   void setSpeed(int n){
       speed = n;
     }
   bool isOn(){
       return on;
     }
   void setOn(bool is){
       on = is;
     }
   double getRadius(){
       return r;
     }
   void setRadius(double new_r){
       r = new_r;
     }
   string getColor(){
       return color;
     }
   void setColor(string clr){
       color = clr;
     }
 };