#include<iostream>

using namespace std;

int main() {
    int fibo = 11235813, collar_encontrado;
    cin >> collar_encontrado;
    if (collar_encontrado == fibo) {
        cout << "Se encontro a Fiboacci" << endl;
    }else{
        cout << "Esto no es Fibonacci" << endl;
    }
    return 0;
}