#include <iostream>
using namespace std;
int main()
{
    string palabras = "Palabras";
    unsigned long long int computadora;
    int mestemp;
    float couta_mes_bol = 0, couta_mes_dolar = 0;
    float cambio;
    cout << "Introduce el numero de computadoras: ";
    cin >> computadora;
    cout << "Introduce el tipo de cambio actual: ";
    cout << cambio;
    cout << "Introduce el numero de meses: ";
    cin >> mestemp;
    const int meses = mestemp;

    couta_mes_bol = ((computadora * cambio) / meses);
    couta_mes_dolar = (computadora / meses);
    cout << "La cuota mensual en bolivianos es = " << couta_mes_bol << " bolivianos" << endl;
    cout << "La cuota mensual en dolares es = " << couta_mes_dolar << " $" << endl;
    cout << palabras;

    return 0;
}