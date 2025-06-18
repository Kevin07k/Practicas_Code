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

vi factorial;

int generate_factorial(int number) {
    if (number == 0) return 1;
    if (factorial[number]  != -1) return factorial[number];
    long num = number * (generate_factorial(number - 1));
    factorial[number] = num;
    return num;
}

void solve() {
    int number = 0; cin>>number;
    factorial.resize(number+1, -1);
    factorial[0] = 1;
    generate_factorial(number);
    double long num_sum = 0;
    for (int i = 0; i <= number; i++ ) {
        num_sum += (double)(1.00/factorial[i]);
    }
    cout<<num_sum;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
