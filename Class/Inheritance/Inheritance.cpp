// Note：The inheritance part you should understand
#include<iostream>
#include"Shape.h"
#include"Another_shape.h"

 //Circle::Circle(double radius):_radius{radius}{}
 


int main(int argc, char const *argv[])
{
    Circle Circle(2);
    Rectangle Rectangle(4,4);
    std::cout<< Circle.area() <<'\n';
    std::cout<< Rectangle.area() <<'\n';
    return 0;
}
