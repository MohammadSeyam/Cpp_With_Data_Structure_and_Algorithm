#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a lower case letter: ";
    cin>>ch;
    ch = ch -'a' +'A';
    cout<<"upper case is : "<<ch<<endl;
    return 0;
}