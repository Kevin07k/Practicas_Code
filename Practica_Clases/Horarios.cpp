#include<iostream>
using namespace std;

int main() {
    int hora;
    cin>>hora;
    if (!(hora >= 0 and hora <= 23)) {
        cout<<"El dato introducido no esta en el rango correspondiente";
    }else {
        if (hora >= 6 and hora < 10) {
            cout<<"Buenos Dias";
        }else if (hora >= 10 and hora <= 17) {
            cout<<"Buenas Tardes";
        } else if (hora > 17 and hora <= 22) {
            cout<<"Buenas Noches";
        } else if (hora > 22 or hora <= 5) {
            cout<<"Buenas madrugadas";
        }
    }

    return 0;
}
