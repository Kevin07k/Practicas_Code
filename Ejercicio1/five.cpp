#include<iostream>
using namespace std;
int main()
{
    char x = 's';
    char y = 'o';
    char temp;
    cout <<"Antes del programa"<<endl;
    cout <<"x - "<< x << endl;
    cout <<"y - "<< y << endl;
    // Proceso de cambio intercambio de valor
    temp = x;
    x = y;
    y = temp;
    cout <<"Despues del programa"<<endl;
    cout <<"x - "<< x << endl;
    cout <<"y - "<< y << endl;
    return 0;
}