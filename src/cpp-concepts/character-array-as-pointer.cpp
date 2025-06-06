#include<iostream>
using namespace std;

int print(char* c){
     while(*c != '\0'){
        std::cout<< *c<< "\n";
        c++;
    }
    return 0;
}
int main(){
    char str[6] = "APPLE";
    
   print(&str[0]);
    return 0;
}