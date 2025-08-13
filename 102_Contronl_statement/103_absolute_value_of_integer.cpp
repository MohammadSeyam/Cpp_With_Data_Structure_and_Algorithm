#include<iostream>
using namespace std;

int main(){
    int n,ab;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0) ab = n *(-1);
    cout<<"The absolute value of "<<n<<" is: "<<ab<<endl;
    return 0;
}