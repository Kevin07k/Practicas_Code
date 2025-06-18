#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A, B, C;
    cout << "Introducir las constantes A,B,C de la ecucaion deben estar separados por un espacio:" << endl;
    cin >> A >> B >> C;
    float disc = (B * B) - 4 * A * C;
    float x1 = (-B + sqrt(disc)) / (2 * A);
    float x2 = (-B - sqrt(disc)) / (2 * A);

    if (A == 0){
        cout << "No se puede dividir entre cero" << endl;
    }else{
        cout << "Las soluciones son: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    return 0;
}