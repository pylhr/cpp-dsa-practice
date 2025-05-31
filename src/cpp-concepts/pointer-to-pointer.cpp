#include <iostream>
using namespace std;

int main(){
    int x = 5;
    cout << "x = " << x <<"\n";
    int* p = &x;
    cout << "p = " << p << " ; *p = "<<*p<<"\n";
    int** q = &p;
    cout << "q = " << q << " ; *q = "<<*q << " ; **q = "<<**q<<"\n";
    int*** r = &q;
    cout << "r = " << r << " ; *r = "<<*r << " ; **r = "<<**r<<" ; ***r = "<< ***r<<"\n";
    
    return 0;
}