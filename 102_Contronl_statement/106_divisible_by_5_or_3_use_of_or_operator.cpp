#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";cin>>n;
    if(n%5==0 || n%3==0){
        cout<<n<<" is divisible by 5 or 3\n";
    }
    else cout<<n<<" is not divisible by 5 or 3\n";
}




// if conditon 1 is true then compiler won't check condition 2
