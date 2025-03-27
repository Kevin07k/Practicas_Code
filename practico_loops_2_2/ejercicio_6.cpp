#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

int sum_digit(int number){
    if(number ==  0 ) return 0;
    else return (number % 10) + sum_digit(number/10);
}

void solve(){
    int number = 0; cin>> number;
    int suma = sum_digit(number);
    cout<<"La suma de los digitos del numero "<<number<<" es "<<suma<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}