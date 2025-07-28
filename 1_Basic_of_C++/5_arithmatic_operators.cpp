#include<iostream>
using namespace std;

int main(){
    int x = 10 ;
    int y = 21 ;

    int sum = x + y ;
    int sub = x - y ;
    int mul = x * y ; 
    int div = y / x ;
    int mod = y % x ;

    cout<<"x + y = "<<sum<<endl;
    cout<<"x - y = "<<sub<<endl;
    cout<<"x * y = "<<mul<<endl;
    cout<<"y / x = "<<div<<endl;
    cout<<"y % x = "<<mod<<endl;

    return 0;
}

// % -> modular arithmatic 
