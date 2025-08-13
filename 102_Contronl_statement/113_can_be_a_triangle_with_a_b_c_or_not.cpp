#include<iostream>
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;

    if(a+b>c && b+c>a && a+c>b) cout<<"possible to form a triangle\n";
    else cout<<"not possible to form a triangle\n";
}
