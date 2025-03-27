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

int cont_steps(int number) {
    int cont = 0;
    while(number != 0){
        if (number % 3 == 0) number += 4;
        else if (number % 4 == 0) number /= 2;
        else number--;
        cont++;
    }
    return cont;
}

void solve() {
    int number_init, number_end; cin >> number_init >> number_end;
    if (number_init < 0) cout << "El numero debe de ser positivo y mayor a zero";
    if (number_end < number_init) cout << "El numero de fin no debe de ser menor al inicial";
    for (int i = number_init; i <= number_end; ++i) {
        cout << i << " -> " << cont_steps(i)<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}