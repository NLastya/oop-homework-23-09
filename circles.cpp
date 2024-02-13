//файл для реализации



#include "constants.hpp"

class Circle{
public:
    Circle() = default;
    Circle(double newX, double newY, double newRadius);
    double lenght();
private:
    double x(0.0);
    double y(0.0);
    double radius(0.0);
};

// #endif


//с помощью CMAKE листов писать endif