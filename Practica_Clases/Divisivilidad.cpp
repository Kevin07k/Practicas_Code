#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Introdusca un numero: ";
    cin >> number;
    bool sw = false;
    if (number % 2 == 0) {
        cout << "Div2";
        sw = true;
    }
    if (number % 3 == 0) {
        if (sw) {
            cout << " and ";
        }
        cout << "Div3";
        sw = true;
    }
    if (number % 5 == 0) {
        if (sw) {
            cout<<" and ";
        }
        cout << "Div5";
    }
    return 0;
}
