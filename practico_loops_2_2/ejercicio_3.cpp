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
    int cont = 0;
    int torta = 0;
    while (true) {
        if (cont > 10) break;
        cin >> torta;
        if (torta == 1) {
            cout<<"Om-nom-nom :P"<<endl;
            cont++;
        } else {
            cout << "Sin pastel :("<<endl;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
