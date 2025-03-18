#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b > 0)
        return gcd(b, a % b);
    return a;
}

int main() {
    int n, m, res;
    cin >> n >> m;
    res = m + n - gcd(m, n);
    cout<<res<<endl;
    return 0;
}
