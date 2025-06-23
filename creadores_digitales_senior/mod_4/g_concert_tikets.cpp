#include <iostream>
#include <set>

using namespace std;


void input_values(multiset<int> &list_of_price, int &number_of_people);

void working_in_variables(multiset<int> &list_of_price, int &number_of_people);

int main() {
    multiset<int> list_of_price;
    int number_of_people;
    input_values(list_of_price, number_of_people);
    working_in_variables(list_of_price, number_of_people);
    return 0;
}

void input_values(multiset<int> &list_of_price, int &number_of_people) {
    // number of prices of tickets
    int number_of_prices;
    cin >> number_of_prices;

    // Number of people for the concert
    cin >> number_of_people;

    // input of elements the multiset based on number_of_prices
    for (int i = 0; i < number_of_prices; ++i) {
        int temp_price;
        cin >> temp_price;
        list_of_price.insert(temp_price);
    }
}

void working_in_variables(multiset<int> &list_of_price, int &number_of_people) {
    // input the elements and working for all dates
    for (int i = 0; i < number_of_people; ++i) {
        int number_of_max_price;
        cin >> number_of_max_price;
        auto variable = list_of_price.upper_bound(number_of_max_price);
        if (variable != list_of_price.begin()) {
            // we subtract -1 in variable for the least equal
            --variable;
            cout << *variable << endl;
            list_of_price.erase(variable);
        } else {
            cout << "-1" << endl;
        }
    }
}
