#include <string.h>
#include <iostream>
using namespace std;
// int main (void) {
//     int a =7;

//     int& r= a;

//     int *p = &a;

//     r *= 2;

//     int* & rp = p;

//     *rp *=2;

//     cout << a;
        
// }

class String {

    char *storageM;   // pointer to allocated memory on the heap

    int lengthM;       // represents length of string

public:

    String(char *s);   // ctor

    ~String();   // dtor

    void display();

};

int main(void) {

    char a[]= "ABCD";

    char b[] = "xyz";

    String s1(a);

    String s2 (b);

    s1 = s2;

    return 0;

}