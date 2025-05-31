#include <iostream>
using namespace std;
int main(){
    int a;
    int*p;
    a = 4;
    p = &a;
    cout << "Address of A is " << p;
    cout << "\nValue at A is " << *p;
    a = 20;
    cout<< "\nWe updated the value of A now.";
    cout << "\nAddress of A is " << p;
    cout << "\nValue at A is " << *p;
    return 0;
}
