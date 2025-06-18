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
    string word; cin>>word;
    short int cont = 0;
    for (int i = 0; i < word.size(); ++i) {
        if(word[i] == 'f') cont++;
        if(cont == 2){
            cout<<i<<endl;
            break;
        }
    }
    if(cont == 1) cout<<"-1"<<endl;
    if(cont == 0) cout<<"-2"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}