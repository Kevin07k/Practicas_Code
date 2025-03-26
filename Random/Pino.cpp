#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
// const int LLINF = 4e18;
const double EPS = 1e-9; // very small number

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; cin >> N;
    int mid = (N / 2) + 1;
    for (int i = 0; i < mid; ++i) {
        int cont = i+i;
        int space = (N/2)-i;
        for (int j = 0; j < space; ++j) {
            cout<<" ";
        }
        for (int j = 0; j <= cont; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
    int space = (N/2);
    for (int i = 0; i < mid-1; ++i) {
        for (int j = 0; j < space; ++j) {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}