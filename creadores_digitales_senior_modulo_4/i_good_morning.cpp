#include<iostream>
#include<vector>
using namespace std;
/*
 * El problema es poder introducir el número de segundos en el microondas, pero estás durmiendo
 * asi que puedes controlar tu mano bien asi que solo puedes introducir de derecha y abajo y presionar
 * varias veces el mismo botón
 */
unsigned short int compare_numbers(const unsigned short int &seconds, const vector<int> &list);

int main() {
    const vector list = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        22, 23, 25, 26, 28, 29,
        33, 36, 39,
        40, 44, 45, 46, 47, 48, 49,
        50, 55, 56, 58, 59,
        66, 69,
        70, 77, 78, 79,
        80, 88, 89,
        99
    };
    int queries;
    cin >> queries;
    while (queries--) {
        unsigned short int seconds;
        cin >> seconds;
        if (seconds == 100 or seconds == 200) {
            cout << seconds << endl;
        }else if (seconds < 100 or seconds >= 110) {
            if (seconds < 100) {
                cout <<compare_numbers(seconds, list)<<endl;
                continue;
            }
            seconds -= 100;
            cout<< (compare_numbers(seconds, list) + 100) << endl;
        }else {
            //100 < number < 110
            if (seconds < 105) {
                cout<< 100<<endl;
                continue;
            }
            cout<< 110<<endl;
        }
    }
}

unsigned short int compare_numbers(const unsigned short int &seconds, const vector<int> &list) {
    auto it = lower_bound(list.begin(), list.end(), seconds);
    auto it_menor = it;
    --it_menor;
    if (seconds - *it_menor < *it - seconds) {
        return *it_menor;
    }
    return *it;
}
