#include<iostream>
using namespace std;

int main() {
    int numero1 = 0, numero2= 0;
    cout <<"introduzca un valor de num1 y num2: ";
    cin >> numero1 >>numero2;
    for (int a = numero1; a <= numero2; ++a) {
        int cont = 0;
        int result_pasos = a;
        while (result_pasos != 0) {
            if (result_pasos%3 == 0) {
                result_pasos+=4;
            }else if (result_pasos%4 ==0) {
                result_pasos/= 2;
            }else {
                result_pasos--;
            }
            cont++;
        }
        cout<<a <<"->" <<cont<<endl;
    }


}
