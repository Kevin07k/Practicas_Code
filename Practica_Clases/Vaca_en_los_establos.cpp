#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

bool es_posible(const vector<int>& establos, int k, int dist_minima) {
    int vacas_colocadas = 1;  // Coloca la primera vaca en el primer establo
    int ultima_posicion = establos[0];  // La primera vaca se coloca en el primer establo

    for (int i = 1; i < establos.size(); ++i) {
        // Si la distancia entre el establo actual y la última vaca colocada es suficiente
        if (establos[i] - ultima_posicion >= dist_minima) {
            vacas_colocadas++;  // Coloca una vaca en el establo actual
            ultima_posicion = establos[i];  // Actualiza la última posición colocada

            // Si ya hemos colocado todas las vacas, es posible
            if (vacas_colocadas == k) {
                return true;
            }
        }
    }
    return false;  // Si no conseguimos colocar todas las vacas, retorna falso
}

void solve(){
    int N, k;
    cin >> N >> k;  // Leemos el número de establos (N) y el número de vacas (k)

    vector<int> establos(N);  // Creamos un vector para almacenar las posiciones de los establos
    for (int i = 0; i < N; ++i) {
        cin >> establos[i];  // Leemos las posiciones de los establos
    }

//    sort(establos.begin(), establos.end());  // Ordenamos las posiciones de los establos

    int low = 1, high = establos[N-1] - establos[0];  // Rango de búsqueda para la distancia mínima
    int resultado = 0;  // Resultado de la máxima distancia mínima

    while (low <= high) {
        int mid = (low + high) / 2;  // Calculamos el valor medio para la distancia mínima

        // Verificamos si es posible colocar las vacas con una distancia mínima de "mid"
        if (es_posible(establos, k, mid)) {
            resultado = mid;  // Si es posible, guardamos este valor como el mejor resultado
            low = mid + 1;  // Intentamos con una distancia mayor
        } else {
            high = mid - 1;  // Intentamos con una distancia menor
        }
    }
    cout << resultado << endl;  // Mostramos la mayor distancia mínima posible
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
