#include <iostream>
using namespace std;
int main(){
    int A[] = {1,2,3,4,5};

    int *p;
    p = A;
    for(int i=0; i<5; i++){

    cout<<"\nAddress = "<<(p+i);
    cout<<"\nAddress = "<<(A+i);
    cout<<"\nValue = "<< *(A+i);
    
    }


    return 0;
}