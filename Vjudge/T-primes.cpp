#include<iostream>
#include<cmath>

using namespace std;
#define MAX 1000000
bool criba[MAX + 1] = {};// Inicializa todos los valores en false
void calcular_criba() {
    criba[0] = criba[1] = true;
    for (int i = 2; i < MAX; ++i) {
        if (!criba[i]) {//si la posicion criba[i] es true
            for (int j = i * i; j < MAX; j += i) { // recorre todos los multiplos de para tacharlos
                criba[j] = true;
            }
        }
    }
}

bool es_cuadrado_perfecto(long long n) {
    double sqrt_n = sqrt(n);
    return sqrt_n == int(sqrt_n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    calcular_criba();//llamamos a la funcion para poder tener toda la lista de numeros primos a mano
    int number, n;
    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> number;
        if (number == 4)
            cout << "YES" << endl;
        else if (number % 2 == 0) //Es falso por que todo numero par distinto de 4 ya no cumple la condicion
            cout << "NO" << endl;
        else if (es_cuadrado_perfecto(number) and !criba[int(sqrt(number))]) //Si es cuadrado perfecto y es primo
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
