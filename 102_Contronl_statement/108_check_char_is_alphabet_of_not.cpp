#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";cin>>ch;
    if(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z') ){
        cout<<ch<<" is an alphabet\n";
    }
    else cout<<ch<<" is not an alphabet\n";
    return 0;
}

// (&& > ||)

