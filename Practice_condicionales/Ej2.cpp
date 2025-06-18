#include<iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;
    cin >> lado1 >> lado2 >> lado3;
    if ((lado1 * lado1) == (lado2 * lado2) + (lado3 * lado3)) {
        cout<<"YES"<<endl;
    }
    else if ((lado2 * lado2) == (lado1 * lado1) + (lado3 * lado3)) {
        cout<<"YES"<<endl;
    }
    else if ((lado3 * lado3) == (lado1 * lado1) + (lado2 * lado2) ) {
        cout<<"YES"<<endl;
    }
    else if (lado3 < (lado2 + lado1) and lado2 < (lado1 + lado3) and lado1 < (lado3 + lado2)) {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"UNDEFINED"<<endl;
    }
    return 0;
}
