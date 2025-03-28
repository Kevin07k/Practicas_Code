#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int amount;
    float price;
    cout<<"Introdirce un amount:"<<endl;
    cin>>amount;

    cout<<"Introdirce un price:"<<endl;
    cin>>price;

    float total = amount * price;
    cout<<"El total es: "<<endl;
    cout<<total;
    return 0;
}