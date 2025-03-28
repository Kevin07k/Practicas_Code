#include<iostream>
using namespace std;
int main(){
    float temp;
    cout<<"Ingrese la temperatura: ";
    cin>>temp;
    if(temp < 20){
        cout<<"Hace frio"<<endl;
        cout<<"Tomare algo caliente"<<endl;
    }else{
        cout<<"Hace calor"<<endl;
        cout<<"Tomare al frio"<<endl;
    }
    return 0;
}