#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

/*Algoritmo euclidiano*/
int gcd(int number1, int number2){
    if(number2 == 0) return number1;
    return gcd(number2, number1 % number2);
}


void solve(){
    int number1; cin>> number1;
    int number2; cin>> number2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}