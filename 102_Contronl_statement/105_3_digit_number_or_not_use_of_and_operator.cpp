#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";cin>>n;
    if(n>99 && n<1000) {
        cout<<n<<" is three digit number\n";
    }
    else cout<<n<<" is not three digit number\n";
    return 0;
}


// if condition 1 is false the compiler won't check condition 2.
