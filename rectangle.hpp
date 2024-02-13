#ifndef RECTANGLE_H                                                                              //название данного куска кода для препроцессора, не для файлов
#define RECTANGLE_H


// Rectangle задаётся координатой верхнего левого угла и нижнего левого угла и длинами сторон a, b.
//у него есть метод для подсчёта площади

class Rectangle{
    public:
        double rectangle(double newA, double newB, double newX, double newY);
        double lenght();

    private:
    // неявный конструктор
        // double x1{0.0};
        // double y1{0.0};
        // double x2{-4.0};
        // double y2{0.0};

        double a{5.0};
        double b{4.0};

};

#endif