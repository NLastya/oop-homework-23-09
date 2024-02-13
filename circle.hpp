#ifindef CIRCLE_H
#define CIRCLE_H

const double PI(3.1415);

class Circle{

public:
    Circle(){
    x = 1.0;
    y = 2.0;
    radius = 5.7;
    } //default

    Circle(double newX, double newY, double newRadius){
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
}


