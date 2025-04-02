#include <iostream>
// #include <iomanip>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<double> U(n + 1, 0);
    vector<double> V(n + 1, 0);

    U[0] = 1;
    V[0] = U[0];

    for (int i = 1; i <= n; i++) {
        U[i] = U[i - 1] / i;  // Calculamos Un
        V[i] = V[i - 1] + U[i];  // Acumulamos en Vn
    }

    for (int i = 0; i <= n; i++) {
        cout << "U" << i << " = " << U[i] << "  V" << i << " = " << V[i] << endl;
    }

//    cout << "\nValor esperado de e: " << exp(1) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}
