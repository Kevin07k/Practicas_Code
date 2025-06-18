#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;


void input_values(multiset<int> &list_of_price, vector<int> &list_of_max_prices);

void working_in_variables(multiset<int> &list_of_price, vector<int> &list_of_max_prices);

int main() {
    multiset<int> list_of_price;
    vector<int> list_of_max_prices;
    input_values(list_of_price, list_of_max_prices);
    working_in_variables(list_of_price, list_of_max_prices);
    return 0;
}

void input_values(multiset<int> &list_of_price, vector<int> &list_of_max_prices) {
    // number of prices of tickets
    int number_of_prices;
    cin >> number_of_prices;

    // Number of people for the concert
    int number_of_people;
    cin >> number_of_people;

    // Resize the vector in new size
    list_of_max_prices.resize(number_of_people);

    // input of elements the multiset based on number_of_prices
    for (int i = 0; i < number_of_prices; ++i) {
        int temp_price;
        cin >> temp_price;
        list_of_price.insert(temp_price);
    }
    // input the elements in vector
    for (int &max_price_of_person: list_of_max_prices) {
        cin >> max_price_of_person;
    }
}

void working_in_variables(multiset<int> &list_of_price, vector<int> &list_of_max_prices) {
    for (auto &price: list_of_max_prices) {
        // cout << *list_of_price.upper_bound(price);
        auto variable = list_of_price.upper_bound(price);
        if (variable != list_of_price.begin()) {
            // we subtract -1 in variable for the least equal
            --variable;
            if (*variable <= price) {
                cout<<*variable<<endl;
                list_of_price.erase(variable);
                continue;
            }
        }
        cout<< "-1"<<endl;
        break;
    }
}
