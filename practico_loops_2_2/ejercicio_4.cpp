#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve() {
    int max = 10;
    short int number;
    unsigned int factorial = 1;
    cin >> number;
    if( number <= 10) {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout<<factorial;
    }else {
        cout<<"El numero es muy grande. Intentelo de nuevo";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
