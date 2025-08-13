#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first number: ";cin>>a;
    cout<<"Enter the second number: ";cin>>b;
    cout<<"Enter the third number: ";cin>>c;

    if(a>b && a>c) cout<<a<<" is greatest\n";
    if (b>a && b>c) cout<<b<<" is greatest\n";
    if(c>b && c>a) cout<<c<<" is greatest\n";

    return 0;
}
