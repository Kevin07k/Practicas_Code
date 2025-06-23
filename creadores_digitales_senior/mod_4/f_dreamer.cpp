#include <algorithm>
#include<iostream>
#include <climits>
#include <vector>

using namespace std;

bool is_leap_year(const int &year);

bool is_valid_date(const int &day, const int &month, const int &year);

struct Date {
    int day;
    int month;
    int year;

    // usamos el custom operator < para poder comparar las fechas
    /* NOTA: el const es para que no se modifique la estructura y el segundo cont lo mismo pero ahora para el principal
    * que nos dice que no modificara la estructura principal
     */
    bool operator<(const Date &other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    string d, m, a;

    while (test_cases--) {
        cin >> d >> m >> a;
        string merge = d + m + a;

        vector<int> digits;

        for (auto &number: merge) {
            digits.push_back(number - '0');
        }
        int valid_date_count = 0;
        sort(digits.begin(), digits.end());
        Date min_valid_date = {INT_MAX, INT_MAX, INT_MAX};
        do {
            int day = digits[0] * 10 + digits[1];
            int month = digits[2] * 10 + digits[3];
            int year = digits[4] * 1000 + digits[5] * 100 + digits[6] * 10 + digits[7];
            // Validamos la fecha
            if (is_valid_date(day, month, year)) {
                valid_date_count++;
                Date current_date = {day, month, year};

                // Comparamos las estructura current_date con min_valid con custom operator de current_date
                if (current_date < min_valid_date) {
                    min_valid_date = current_date;
                }
            }
        } while (next_permutation(digits.begin(), digits.end()));
        if (valid_date_count == 0) {
            cout << 0 << endl;
        } else {
            cout << valid_date_count << " ";
            if (min_valid_date.day < 10) cout << "0";
            cout << min_valid_date.day << " ";
            if (min_valid_date.month < 10) cout << "0";
            cout << min_valid_date.month << " ";
            cout << min_valid_date.year << endl;
        }
    }
    return 0;
}

// Verifica si es biciesto
bool is_leap_year(const int &year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

// Validamos la fecha
bool is_valid_date(const int &day, const int &month, const int &year) {
    if (year < 2000) return false;
    if (month < 1 or month > 12) return false;
    if (day < 1) return false;

    // lista para comparar los dias
    // el 0 del primer elemento no se usa
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verificamos febrero
    if (month == 2) {
        if (is_leap_year(year)) {
            if (day > 29) return false;
        } else {
            if (day > 28) return false;
        }
    } else {
        //Vemos si el mes es valido
        if (day > days_in_month[month]) return false;
    }
    return true;
}
