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
    string number; cin>>number;
    string number_reverse = number;
    reverse(number_reverse.begin(), number_reverse.end());
    if(number == number_reverse) cout<<"Es palindrome";
    else cout<<"No es palindrome";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}