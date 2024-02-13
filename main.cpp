#include <iostream>
// #include "constants.hpp"
// #include "circle.hpp"

class Circle{

public:
    Circle(){
    x = 1.0;
    y = 2.0;
    radius = 5.7;
    } //default

    Circle(double newX, double newY, double newRadius){     //Эти фукнции - реализаиця, выносить в отдельный cpp-файл
        x = newX;
        y = newY;
        radius = newRadius;
    }

    double lenght(){
        return 2*PI*radius;
    }

private:
    double x(0.0);
    double y(0.0);
    double radius(1.0);
};


int main() {
    Circle circle1;
}






//правила оформления: классы выделять в отдельные hpp-файлы, функции (реализации) отправлять в cpp