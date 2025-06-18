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
vb list_primes(100001, true);

void generate_number_primes(){
    list_primes[0] = list_primes[1] = false;
    for (int i = 0; i*i <= 100001 ; ++i) {
        if (list_primes[i]){
            for (int j = i * i; j <= 100001; j += i) {
                list_primes[j] = false;
            }
        }
    }
}

void solve(){
    int number; cin>>number;
    generate_number_primes();
    for (int i = 2; i < list_primes.size(); ++i) {
        if(list_primes[i]){
            cout<<i;
            number--;
            if(number != 0) cout << ", ";
            if(number == 0) break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
