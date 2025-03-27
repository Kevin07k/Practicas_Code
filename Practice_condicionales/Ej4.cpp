#include<iostream>
using namespace std;

int main() {
    int mes, age;
    cin>>mes>>age;
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12) {
        cout<<31<<endl;
    }else if (mes == 4 or mes == 6 or mes == 9 or mes == 11) {
        cout<<30<<endl;
    }else {
        if (age % 4 == 0 and age % 100 != 0) {
            cout<<29<<endl;
        } else if (age % 400 == 0) {
            cout << 29 << endl;
        }else if (age % 100 == 0 and age % 400 != 0) {
            cout << 28 << endl;
        } else {
            cout << 28 << endl;
        }
    }
    return 0;
}
