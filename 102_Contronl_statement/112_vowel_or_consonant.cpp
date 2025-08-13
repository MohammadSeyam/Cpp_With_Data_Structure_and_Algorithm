#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";cin>>ch;
    if(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z') ){
       if(ch=='a' || ch=='e' || ch=='i' || ch == 'o' || ch == 'u') cout<<"vowel\n";
       else cout<<"consonant\n";
    }
    else cout<<ch<<" is not an alphabet\n";
    return 0;
}
