#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age % 4 == 0 and age % 100 != 0) {
        cout << "YES" << endl;
    } else if (age % 400 == 0) {
        cout << "YES" << endl;
    }else if (age % 100 == 0 and age % 400 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
