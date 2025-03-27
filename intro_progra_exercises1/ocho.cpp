#include <iostream>
using namespace std;
int main()
{
    float wood_balanc = 1000;
    float w1 = 2, w2 = 2, w3 = 2;
    float d1 = 2, d2 = 2, d3 = 2;
    float h1 = 2, h2 = 2, h3 = 2;
    float s = w1 * d1 + 2 * (w1 * h1 + d1 * h1);
    wood_balanc -= s;
    cout << "Madera contrachapada restante: " << wood_balanc << endl;
    s = w2 * d2 + 2 * (w2 * h2 + d2 * h2);
    wood_balanc -= s;
    cout << "Madera contrachapada restante: " << wood_balanc << endl;
    s = w3 * d3 + 2 * (w3 * h3 + d3 * h3);
    wood_balanc -= s;
    cout << "Madera contrachapada restante: " << wood_balanc << endl;
    return 0;
}