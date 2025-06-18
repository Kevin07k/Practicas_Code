#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve(){
    int numerator,denominator; cin>>numerator>>denominator;
    int cont = 0, sum = 0, res = 0;
    while(sum < numerator){
        cont++;
        sum += denominator;
    }
    res = numerator - sum;
    cout<<cont<<" "<<res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}