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

void solve(){
    int invert_Daphne = 100;
    double money_Daphne = 100, money_Cleo = 100;
    unsigned int gestiones = 0;
    while(true){
        if (money_Cleo > money_Daphne) break;
        money_Daphne += invert_Daphne * 0.10;
        money_Cleo += money_Cleo * 0.05;
        gestiones++;
        cout<<"Anho  "<<gestiones<<" \tDafna = "<<money_Daphne<<" \tCleo = "<<money_Cleo<<endl;
    }
    cout<<"Tardo "<<gestiones<<" en alcanzar al otro";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
