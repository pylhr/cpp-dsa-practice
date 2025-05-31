#include <iostream>
using namespace std;

void Increment(int* p){ 
    *p = (*p) + 1;

}
int main(){
    int a = 10;
    cout<<"a = "<<a;
    Increment(&a);
    cout<<"\nvalue of a after increment = " << a;
    return 0;
}