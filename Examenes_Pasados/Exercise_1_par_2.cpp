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

vector<long long> factorial;

int generate_factorial(int number) {
    if (number == 0) return 1;
    if (factorial[number]  != -1) return factorial[number];
    long num = number * (generate_factorial(number - 1));
    factorial[number] = num;
    return num;
}

double long sen(int n, int x) {
    double long sen = 0;
    int expo = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sen -= pow(x, expo) / factorial[expo];
            // cout<<pow(x, expo)<<"/ "<<factorial[expo]<<endl;
        } else {
            sen += pow(x, expo) / factorial[expo];
            // cout<<pow(x, expo)<<"/"<<factorial[expo]<<endl;
        }
        expo += 2;
    }
    return sen;
}

void solve() {
    int x = 0, n = 0;
    cin >> x >> n;
    factorial.resize(1000 + 1, -1);
    factorial[0] = 1;
    generate_factorial(100 + 1);
    cout << sen(n, x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
