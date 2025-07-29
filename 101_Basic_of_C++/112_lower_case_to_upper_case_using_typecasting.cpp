#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a lower case letter: ";
    cin>>ch;
    int x = int(ch);
    ch = ch - 32;
    ch = char(ch);
    cout<<"Upper case is: "<<ch<<endl;
    return 0;
}
