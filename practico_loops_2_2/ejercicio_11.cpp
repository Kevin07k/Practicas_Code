#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;
typedef vector<double> vd;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve(){
    int n;
    cin>>n;
    vd secuence(n, -1);
    secuence[0] = 1;
    for (int i = 0; i<n; i++) {
        secuence[i +1] = ((secuence[i]) / (i + 1));
    }
    for (int i = 0; i <= n; ++i) {
        cout<<"U"<<i<<" = "<<secuence[i]<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
