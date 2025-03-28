#include<iostream>
#include <string.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    bool list_prime[n + 1];
    memset(list_prime, true, sizeof(list_prime));
    for (int i = 2; i <= n; i++) {
        if (list_prime[i] == true) {
            for (int j = i*i; j < n; j += i) {
                list_prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        if (list_prime[i] == true) {
            cout<< i << ": es primo"<<endl;
        }else {
            cout<< i << ": no es primo"<<endl;
        }
    }
    return 0;
}
