#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

int generate_one_line(int days) {
    days--;
    for (int i = 0; i < days; ++i) {
        cout << "---";
    }
    days = abs(6 - days);
    int temp = days - 1;
    for (int i = 0; i <= days; ++i) {
        cout << "-" << (i + 1);
        if (i<=temp) cout << "-";
    }
    cout << "\n";
    days++;
    return days;
}


void solve() {
    int init_week;
    cin >> init_week; // 1-7
    int end_month;
    cin >> end_month;

    int day_init = generate_one_line(init_week);
    end_month -= day_init;
    // end_month ++;
    day_init++;
    int division = end_month / 7;
    bool sw_positive = true;
    //Columnas
    for (int i = 0; i <= division; i++) {
        //Filas
        for (int j = 0; j < 7; ++j) {
            if (end_month == 0) break;
            if (day_init < 10) cout << "-" << day_init;
            else cout << day_init;
            day_init++;
            end_month--;
            if (j < 6 and end_month != 0) {
                cout << "-";
            }
        }
        cout << "\n";
        if (end_month == 0) break;
    }
    /*while (end_month--) {

    }*/

    // cout<<"-1";


    /**
     * --- --- --- --- --- --- -1
     *  2  3  4  5  6  7  8
     *  9 10 11 12 13 14 15
     *
     */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
