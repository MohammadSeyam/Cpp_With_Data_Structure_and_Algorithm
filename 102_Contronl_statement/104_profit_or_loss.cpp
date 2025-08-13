#include<iostream>
using namespace std;

int main(){
    int cost_price,sell_price;
    cout<<"Enter the cost price: "; cin>>cost_price;
    cout<<"Enter the sell_price: "; cin>>sell_price;

    if(sell_price==cost_price){
        cout<<"No profit, No loss"<<endl;
    }
    else if(sell_price>cost_price){
        int profit = sell_price - cost_price;
        cout<<"The seller made profit of: "<<profit<<" tk\n";
    }
    else{
        int loss = cost_price - sell_price;
        cout<<"The seller made a loss of: "<<loss<<" tk\n";
    }
    return 0;
}