#include<iostream>
using namespace std;

int main(){
    int a = 14;
    int b = 3;
    
    int div = a/b;
    int mul = b * div;

    int remainder = a - mul ;
    cout<<"Remainder of 14/3 is "<<remainder<<endl;

    return 0;
}