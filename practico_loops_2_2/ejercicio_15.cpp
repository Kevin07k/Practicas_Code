#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number
string binary;

int integer_to_binary(int number){
    if(number == 0) return 0;
    binary += to_string(number % 2);
    return integer_to_binary(number / 2);
}

void solve(){
    int number; cin>>number;
    integer_to_binary(number);
    reverse(binary.begin(), binary.end());
    cout<<binary;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}