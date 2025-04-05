#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve() {
    int number = NULL, iterator = 1;
    long int suma_positive = 0, suma_negative = 0;
    cout<<"Introducir los numeros para los calculos (El 0 para salir) \n";
    while (true) {
        cout<<"Numero "<< iterator<<":";
        cin >> number;
        if (number == 0) break;
        if (number > 0) suma_positive += number;
        else suma_negative -= number;
        iterator++;
    }
    cout<<"==================================\n";
    cout<<"Numero ingresados " <<iterator;
    cout<<"\n";
    cout<<"Suma Total: "<<suma_positive + suma_negative;
    cout<<"\n";
    cout<<"Promedio aritmetico: "<<(suma_positive + suma_negative) / iterator;
    cout<<"\n";
    cout<<"Suma de los positivo: "<<suma_positive;
    cout<<"\n";
    cout<<"Suma de los negativos: "<<suma_negative;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
