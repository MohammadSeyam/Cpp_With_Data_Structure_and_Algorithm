#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks(0-100): ";cin>>marks;
    if(marks>=90) cout<<"A+\n";
    else if(marks>=80) cout<<"A\n";
    else if(marks>=70) cout<<"A-\n";
    else if(marks>=60) cout<<"B\n";
    else if(marks>=50) cout<<"C\n";
    else if(marks>=40) cout<<"D\n";
    else cout<<"fail\n";
}