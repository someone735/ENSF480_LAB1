/*
File name: human.cpp
Assignment: Lab 1 Excerise D
Completed by: John Tumacder 
Submission date: Sept 13, 2024
*/

#include "human.h"
#include "point.h"

using namespace std;

Human::Human(){
    strcpy(this -> name, "");
    location.set_x(0);
    location.set_y(0);
}

Human::Human(const char* nam, const double x, const double y): name(new char[strlen(nam)+1]){
    strcpy(this ->name, nam);
    location.set_x(x);
    location.set_y(y);
}

char* Human::get_name() const {
    return name;
}

void Human::set_name(const char* nam){
    this -> name = new char[strlen(nam) + 1];
    strcpy(this -> name, nam);
}

Point Human::get_point() const {
    return location;
}

void Human::display(){
    cout << "Human Name: " << name << "\nHuman Location: "
        << location.get_x() << " ,"
        << location.get_y() << ".\n" << endl;
}