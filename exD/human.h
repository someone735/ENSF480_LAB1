#include "point.h"

#ifndef POINT_H
#define POINT_H

class Human {
private:
    Point location;
    char *name;

public: 
    Human();

    Human(const char* nam, const double x, const double y): name(new char [strlen(nam)+1]);

    char* get_name() const;

    void set_name(const char* name);

    Point get_point() const;

    void display(); 
};
#endif