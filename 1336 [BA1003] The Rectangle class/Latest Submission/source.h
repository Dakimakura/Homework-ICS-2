 class Rectangle
{
  private:
    double width, height;
  public:
    Rectangle(){
         width = 1;
         height = 1;
       }
    Rectangle(double width, double height){
         this->width = width;
         this->height = height;
       }
    double getWidth(){
         return width;
       }
    double getHeight(){
         return height;
       }
    void setWidth(double width){
         this->width = width;
       }
    void setHeight(double height){
         this->height = height;
       }
    double getArea(){
         return width * height;
       }
    double getPerimeter(){
         return 2 * (width + height);
       }
};