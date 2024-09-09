#include "human.h"
#include "point.h"

using namespace std;

Human::Human(){
    
}

Human::Human(const char* name, const double x, const double y): name(new char[strlen(nam)+1]){
    strcpy(this ->name, nam);
    location.set_x(x);
    location.set_y(y);
}
