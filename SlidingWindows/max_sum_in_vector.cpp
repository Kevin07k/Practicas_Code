#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int sliding_windows(const vector<int> & list, int size_the_sum);

int main() {
    int size_vector = 0; cin >> size_vector;
    int size_sum_max = 0; cin >> size_sum_max;
    vector<int> list_of_the_numbers(size_vector);
    for (int &value: list_of_the_numbers) {
        cin >> value;
    }
    cout<< sliding_windows(list_of_the_numbers, size_sum_max);
    return 0;
}

int sliding_windows(const vector<int> & list, int size_the_sum) {
    unsigned long int size_list = list.size();
    int max_sum = INT_MIN;
    for (int i = 0; i <= size_list - size_the_sum; ++i) {
        int tem_sum = 0;
        for (int j = 0; j < size_the_sum; ++j) {
            tem_sum += list[i+j];
        }
        max_sum = max(tem_sum, max_sum);
    }
    return max_sum;
}