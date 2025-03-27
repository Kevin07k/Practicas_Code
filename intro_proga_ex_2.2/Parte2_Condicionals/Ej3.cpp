#include<iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (B == 0) {
        cout << "Imposible";
    } else {
        cout << (int) (A / B);
    }
}
