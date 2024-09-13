/*
File name: human.h
Assignment: Lab 1 Excerise D
Completed by: John Tumacder 
Submission date: Sept 13, 2024
*/

#include "point.h"
#include <cstring>
#include <iostream>

#ifndef HUMAN_H
#define HUMAN_H

class Human {
private:
    Point location;
    char *name;

public: 
    Human();

    Human(const char* nam, const double x, const double y): name(new char [strlen(nam)+1]){};

    char* get_name() const;

    void set_name(const char* nam);

    Point get_point() const;

    void display(); 
};
#endif