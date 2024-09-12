/*
File name: point.cpp
Assignment: Lab 1 Excerise B
Completed by: John Tumacder 
Submission date: Sept ___, 2024
*/

#include "point.h"

using namespace std;

Point::Point() : x(0), y(0){}

Point::Point(const double a, const double b)
    : x(a), y(b) {}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}

void Point::set_x(const double a){
    x = a;
}
void Point::set_y(const double a){
    y = a;
}

