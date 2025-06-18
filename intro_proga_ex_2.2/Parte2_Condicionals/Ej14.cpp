#include<iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    if(number == 0){
        cout<<"No se encontraron documentos"<<endl;
    }else if(number == 1){
        cout<<"Se encontro un documento"<<endl;
    }else{
        cout<<number<<" documentos encontrados."<<endl;
    }
    return 0;
}