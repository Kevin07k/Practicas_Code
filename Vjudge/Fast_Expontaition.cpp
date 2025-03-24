#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

string convert_binary(int number) {
    string binary;
    while (number > 0) {
        int bit = number % 2;
        binary.push_back('0' + bit);
        number /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N = 0;
    cin >> N;
    string binary_number = convert_binary(N);
    string secuence;
    bool sw_primer_SW_remove = false;
    bool sw_one_number = false;
    for (auto iterator: binary_number) {
        if (iterator == '0' and sw_one_number != false) {
            secuence.push_back('S');
            // cout << "S" << "<-" << iterator << endl;
        } else if (iterator == '1' and sw_primer_SW_remove == true) {
            secuence.push_back('S');
            secuence.push_back('X');
            // cout << "SX" << "<-" << iterator << endl;
            sw_one_number = true;
        } else {
            sw_primer_SW_remove = true;
            sw_one_number = true;
        }
    }
    cout << secuence;
    return 0;
}
