#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_vector(vector<int> &prefix_sum) {
    for (const int & sum: prefix_sum) {
        cout<< sum << " ";
    }
}

int main() {
    int size_vector;
    vector<int> list_numbers, prefix_sum;
    cin>>size_vector;
    for (int i = 0; i < size_vector; ++i) {
        int number;
        cin>>number;
        list_numbers.push_back(number);
        if (i == 0) {// Solo para el primer elemento
            prefix_sum.push_back(number);
        } else {// Para los demás elementos, sumamos el valor actual al anterior
            prefix_sum.push_back(prefix_sum[i - 1] + number);
        }
    }
    // Consultas
    int queries;
    cin>>queries;
    while (queries--) {
        int i, j;
        cin>>i>>j;
        if (i == 0) {
            // Si i es 0, simplemente devolvemos el valor en j
            cout<< prefix_sum[j] << endl;
        } else {
            // Devolvemos la suma entre i y j
            cout<< prefix_sum[j] - prefix_sum[i - 1] << endl;
        }
    }
}