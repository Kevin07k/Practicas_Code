#include <iostream>
using namespace std;
int main()
{
    string title1, title2, title3;
    getline(cin, title1);
    getline(cin, title2);
    getline(cin, title3);
    cout << title3 << endl << title2 << endl << title1;
    return 0;
}