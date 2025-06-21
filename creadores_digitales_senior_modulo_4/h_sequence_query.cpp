#include<iostream>
#include<set>

using namespace std;

void add_value_to_list(multiset<long long int> &list, const unsigned long long int &value);

void search_less_than_or_equal(multiset<long long int> &list, unsigned const long long int &x_value_compared,
                               const unsigned short int &k_value_position);

void search_greater_than_or_equal(multiset<long long int> &list, const unsigned long long int &x_value_compared,
                                  const unsigned short int &k_value_position);

int main() {
    multiset<long long int> list;
    unsigned int q_querys;
    cin >> q_querys;
    for (unsigned int i = 0; i < q_querys; ++i) {
        // Creamos el tipo de pregunta
        unsigned short int type_query;
        cin >> type_query;
        // Creamos el valor de x
        unsigned long long int x_query;
        cin >> x_query;
        /*cout<< "Type_query => " <<type_query << endl;
        cout<< "X_query => " <<x_query << endl;*/
        if (type_query != 1) {
            // Creamos la variable k <= 5
            unsigned short int k_query;
            cin >> k_query;
            if (type_query == 2) {
                search_less_than_or_equal(list, x_query, k_query);
                continue;
            }
            search_greater_than_or_equal(list, x_query, k_query);
            continue;
        }
        // cout<< "LLegamos aqui"<<endl;
        add_value_to_list(list, x_query);
    }
}

void add_value_to_list(multiset<long long int> &list, const unsigned long long int &value) {
    // cout <<"------- Agregando valor a la lista -------"<<endl;
    list.insert(value);
    // cout << "------- Valor agregado correctamene -------"<<endl;
}

void search_less_than_or_equal(multiset<long long int> &list, const unsigned long long int &x_value_compared,
                               const unsigned short int &k_value_position) {
    /*// cout << "------- Buscando valor menor o igual -------" << endl;
    if (list.size() < k_value_position) {
        // Si no hay suficientes elementos, imprimimos -1
        cout << "-1" << endl;
        // cout << "------- No se encontró el valor -------" << endl;
        return;
    }*/
    multiset<long long int>::iterator less_than = list.upper_bound(x_value_compared);
    /*if (less_than == list.begin()) {
        // No hay elementos <= x_value_compared
        // el elemento buscado es menor que todos los elementos que hay en el multiset asi que está en el inicio
        cout << "-1" << endl;
        // cout << "------- No se encontró el valor -------" << endl;
        return;
    }
    // Si no está en el inicio significa que hay al menos un elemento menor o igual que x_value_compared
    // no hay necesidad de compara con el .end() porque ya sabemos que hay al menos un elemento menor o igual que x_value_compared
    less_than--;
    // cout<<distance(list.begin(), less_than) << endl;
    if ((distance(list.begin(), less_than)+1) >= k_value_position) {
        advance(less_than, -(k_value_position-1));
        // -k_value_position = tiene el signo menos para volverlo negativo para poder mover el puntero hacia atras si es positivo mueve hacia adelante
        cout << *less_than << endl;
        // cout<< "------- Valor encontrado -------" << endl;
        return;
    }
    cout << "-1" << endl;
    // cout << "------- No se encontró el valor -------" << endl;*/
    // Mover el iterador 'k_value_position' veces hacia atrás
    for (int i = 0; i < k_value_position; ++i) {
        if (less_than == list.begin()) {
            // Si llegamos al inicio del multiset antes de alcanzar k_value_position, imprimimos -1
            cout << "-1" << endl;
            return;
        }
        --less_than; // Mover al elemento anterior
    }
    // Después de los 'k_value_position' movimientos, 'it' debería apuntar al elemento buscado.
    // Aunque ya lo hemos movido 'k' veces, debemos asegurarnos de que el valor aún sea <= x_value_compared
    if (*less_than <= x_value_compared) {// Comprobamos que el valor final sea realmente menor o igual
        cout << *less_than << endl;
    }else {
        cout<< "-1" << endl;
    }
}

void search_greater_than_or_equal(multiset<long long int> &list, const unsigned long long int &x_value_compared,
                                  const unsigned short int &k_value_position) {
    /*// cout<< "------- Buscando valor mayor o igual -------" << endl;
    if (list.size() < k_value_position) {
        // Si no hay suficientes elementos, imprimimos -1
        cout << "-1" << endl;
        // cout << "------- No se encontró el valor -------" << endl;
        return;
    }*/
    multiset<long long int>::iterator greater_than = list.lower_bound(x_value_compared);
    /*if (greater_than == list.end()) {
        // No hay elementos >= x_value_compared
        // el elemento buscado es mayor que todos los elementos que hay en el multiset asi que está al final
        cout << "-1" << endl;
        // cout << "------- No se encontró el valor -------" << endl;
        return;
    }
    // Si no está al final significa que hay al menos un elemento mayor o igual que x_value_compared
    if (distance(greater_than, list.end()) >= k_value_position) {
        advance(greater_than, k_value_position - 1);
        // k_value_position - 1 = para que se mueva al k-esimo elemento
        cout << *greater_than << endl;
        // cout << "------- Valor encontrado -------" << endl;
        return;
    }
    cout << "-1" << endl;
    // cout << "------- No se encontró el valor -------" << endl;*/

    // Mover el iterador 'k_value_position - 1' veces hacia adelante.
    for (int i = 0; i < k_value_position - 1; ++i) {
        if (greater_than == list.end()) {
            // Si llegamos al final del multiset antes de alcanzar k_value_position, imprimimos -1
            cout << "-1" << endl;
            return;
        }
        ++greater_than; // Mover al siguiente elemento
    }
    if (greater_than == list.end()) {
        // Si llegamos al final del multiset, imprimimos -1
        cout << "-1" << endl;
    } else {
        // Imprimimos el valor encontrado
        cout << *greater_than << endl;
    }
}
