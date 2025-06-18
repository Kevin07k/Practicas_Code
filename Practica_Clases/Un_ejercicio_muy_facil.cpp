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
    int n, x, y;
    cin>>n>>x>>y;
    int mini = min(x,y);
    int maxi = max(x,y);
    int inicio = mini, final = n * maxi;
    int possible_result = 0;
    while (inicio < final) {
        int mid = (inicio + final) / 2;
        if (((mid - 1)/x + mid / y) >= n) {
            final = (mid -1);
            possible_result = mid;
        }else {
            inicio = (mid + 1);
        }
    }
    cout<<possible_result<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
