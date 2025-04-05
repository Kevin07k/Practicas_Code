#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void final(string mensaje) {
    cout << "\n" << mensaje << "\nGracias por jugar.\n";
}

void solve() {
    int opcion;
    string nombre;

    cout << "Bienvenido a la aventura de texto. \nIngresa tu nombre: ";
    cin >> nombre;

    cout << "\nHola " << nombre << ", te encuentras en un bosque misterioso. \n";
    cout << "Tienes cuatro caminos: \n";
    cout << "1. Explorar la cueva oscura.\n";
    cout << "2. Seguir el sendero iluminado.\n";
    cout << "3. Escalar la montana.\n";
    cout << "4. Cruzar el rio peligroso.\n";

    do {
        cout << "Elige una opcion: ";
        cin >> opcion;
    } while (opcion < 1 || opcion > 4);

    if (opcion == 1) {
        cout << "\nEntras a la cueva y encuentras un tesoro. \n";
        cout << "Pero hay un dragon durmiendo sobre el oro. \n";
        cout << "1. Intentar robar el tesoro.\n";
        cout << "2. Salir sigilosamente.\n";
        cout << "3. Despertar al dragon.\n";

        do {
            cout << "Elige una opcion: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 3);

        if (opcion == 1) {
            final("El dragon se despierta y te quema con su fuego. Fin del juego.");
        } else if (opcion == 2) {
            final("Sales sin hacer ruido y escapas con vida. Bien jugado.");
        } else {
            final("El dragon despierta y te convierte en su almuerzo. Fin del juego.");
        }
    } else if (opcion == 2) {
        cout << "\nSigues el sendero y ves una casa abandonada. \n";
        cout << "1. Entrar en la casa.\n";
        cout << "2. Continuar caminando.\n";
        cout << "3. Esconderse en los arbustos.\n";

        do {
            cout << "Elige una opcion: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 3);

        if (opcion == 1) {
            final("La casa era una trampa y caes en un pozo sin salida. Fin del juego.");
        } else if (opcion == 2) {
            final("Sigues el camino y llegas a un pueblo seguro. Has ganado.");
        } else {
            final("Te escondes, pero la noche cae y te pierdes en el bosque. Fin del juego.");
        }
    } else if (opcion == 3) {
        cout << "\nEscalas la montaña y encuentras un anciano sabio. \n";
        cout << "1. Hablar con el anciano.\n";
        cout << "2. Ignorarlo y seguir subiendo.\n";
        cout << "3. Descansar un momento.\n";

        do {
            cout << "Elige una opcion: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 3);

        if (opcion == 1) {
            final("El anciano te da un mapa secreto y encuentras un tesoro. ¡Victoria!");
        } else if (opcion == 2) {
            final("Subes demasiado y te caes. Fin del juego.");
        } else {
            final("Mientras descansas, una avalancha te arrastra. Fin del juego.");
        }
    } else {
        cout << "\nCruzas el río y ves un bote abandonado. \n";
        cout << "1. Subirte al bote y remar.\n";
        cout << "2. Nadar hasta la otra orilla.\n";
        cout << "3. Buscar otro camino.\n";

        do {
            cout << "Elige una opcion: ";
            cin >> opcion;
        } while (opcion < 1 || opcion > 3);

        if (opcion == 1) {
            final("El bote tiene un agujero y te hundes. Fin del juego.");
        } else if (opcion == 2) {
            final("Logras nadar y llegas a un lugar seguro. ¡Ganaste!");
        } else {
            final("Buscas otro camino, pero te pierdes en la selva. Fin del juego.");
        }
    }
}

int main() {
    solve();
    return 0;
}