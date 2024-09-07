#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point{
private:
    double x;     // x coordinate of a location on Cartisian Plain
    double y;     // y coordinate of a location on Cartisian Plain
public:
    Point();
    Point(const double a, const double b): x(a), y(b) {}
    double get_x() const;
    double get_y() const;
    void set_x(const double a);
    void set_y(const double a);
};

#endif