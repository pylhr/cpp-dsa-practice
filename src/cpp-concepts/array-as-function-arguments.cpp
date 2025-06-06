#include<iostream>
using namespace std;
/*only pointer to array should be used to utilize complete benefit of pointer variable*/
int SOE(int A[], int len){
    int sum =0;
    for(int i=0; i<len;i++){
        sum += A[i];
    }
    return sum;
}
int main(){
    int A[] = {2,4,5,7,8};
    int len = sizeof(A)/sizeof(A[0]);
    int sum = SOE(A, len);
    cout<<"Sum of Elements of A is "<<sum;
    return 0;
}
