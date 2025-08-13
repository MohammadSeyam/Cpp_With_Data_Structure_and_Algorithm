// check if an integer is divisible by 5 or 3 but not divisible by 15

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";cin>>n;
    if(n%5==0 || n%3==0) {
        if(n%15!=0){
            cout<<"condition matching\n";
        }
        else cout<<"condition not matching\n";
    }
    else cout<<"condition not matching\n";
}