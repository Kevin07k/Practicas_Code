#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int obtener_forma_reducida(int num) {
    int forma = 1;

    // Factorizar el número y eliminar los factores cuadrados
    for (int i = 2; i * i <= num; ++i) {
        int count = 0;
        while (num % i == 0) {
            num /= i;
            count++;
        }

        // Si el exponente del factor es impar, lo mantenemos
        if (count % 2 == 1) {
            forma *= i;
        }
    }

    // Si num es mayor que 1, es un factor primo, lo añadimos
    if (num > 1) {
        forma *= num;
    }

    return forma;
}

int main(){
    int number_cases;
    cin >> number_cases;

    for(int i = 0; i < number_cases; i++) {
        int number_elements, k = 0;
        cin >> number_elements;
        vector<int> elements(number_elements);
        cin >> k;

        // Llenamos el vector
        for (int j = 0; j < number_elements; ++j) {
            cin >> elements[j];
        }

        unordered_set<int> formas_vistas;
        int segmentos = 1;  // Siempre hay al menos un segmento

        // Procesamos cada número y calculamos su forma reducida
        for (int num : elements) {
            int forma = obtener_forma_reducida(num);

            // Si ya hemos visto esta forma reducida, comenzamos un nuevo segmento
            if (formas_vistas.count(forma)) {
                segmentos++;
                formas_vistas.clear();  // Limpiamos el conjunto para el nuevo segmento
            }

            // Insertamos la forma reducida actual
            formas_vistas.insert(forma);
        }

        // Imprimimos el número de segmentos
        cout << segmentos << endl;
    }

    return 0;
}
