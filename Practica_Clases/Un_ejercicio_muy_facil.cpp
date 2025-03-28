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
    int N, foto_copyX, foto_copyY;
    cin >> N >> foto_copyX >> foto_copyY;
    int copias_act = 0, original = 1, cont_time = 0;
    if (foto_copyX == foto_copyY) {
        cont_time += (--N) * foto_copyX;
    } else {
        int mayor = max(foto_copyX, foto_copyY);
        int menor = min(foto_copyX, foto_copyY);
        double production_oin_tim = ((mayor / menor));
        cont_time += menor;
        copias_act ++;
        while ((production_oin_tim+copias_act) > N) {
            copias_act += production_oin_tim;
            cont_time += mayor;
        }
        while (copias_act != N) {
            if (copias_act > 0) {

            } else {
                copias_act++;
                cont_time += menor;
            }
        }
    }
    cout<<cont_time;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
