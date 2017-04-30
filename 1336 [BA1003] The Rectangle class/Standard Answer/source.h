// Problem#: 17646
// Submission#: 4642249
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
private:
    double width, height;
public:
    Rectangle(double Width = 1., double Height = 1.) {
        width = Width;
        height = Height;
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    void setWidth(double Width){
        width = Width;
    }
    void setHeight(double Height){
        height = Height;
    }
    double getArea() {
        return width * height;
    }
    double getPerimeter() {
        return 2 * (width + height);
    }
};                                 
