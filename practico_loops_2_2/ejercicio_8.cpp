#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve() {
    string words_spaces, words;
    getline(cin, words_spaces);
    for(auto character: words_spaces){
        if(character != ' ') words += character;
    }
    string reversed_words = words;
    reverse(reversed_words.begin(), reversed_words.end());
    if(words == reversed_words) cout<<"YES";
    else cout<<"NO";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}