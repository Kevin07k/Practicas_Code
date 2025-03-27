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

void solve(){
    int answare = 0;
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;

    cout << "Bienvenido, el quiz del sombrero magico comienza !! " << endl;

    // P1
    cout << "P1) Cuando esté muerto, quiero que la gente me recuerde como: " << endl;
    cout << "1) El Bien" << endl;
    cout << "2) El Grande" << endl;
    cout << "3) El Sabio" << endl;
    cout << "4) El Audaz" << endl;
    cin >> answare;

    if (answare == 1) {
        hufflepuff++;
    } else if (answare == 2) {
        slytherin++;
    } else if (answare == 3) {
        ravenclaw++;
    } else if (answare == 4) {
        gryffindor++;
    } else {
        cout << "Entrada incorrecta" << endl;
        return; // Exit if input is invalid
    }

    // P2
    cout << "P2) Si tuviera que elegir un compañero, preferiría alguien que sea: " << endl;
    cout << "1) Fiel y leal" << endl;
    cout << "2) Ambicioso y astuto" << endl;
    cout << "3) Inteligente y curioso" << endl;
    cout << "4) Valiente y decidido" << endl;
    cin >> answare;

    if (answare == 1) {
        hufflepuff++;
    } else if (answare == 2) {
        slytherin++;
    } else if (answare == 3) {
        ravenclaw++;
    } else if (answare == 4) {
        gryffindor++;
    } else {
        cout << "Entrada incorrecta" << endl;
        return;
    }

    // P3
    cout << "P3) ¿Qué habilidad prefieres tener? " << endl;
    cout << "1) Tratar con criaturas mágicas" << endl;
    cout << "2) Manipular a los demás" << endl;
    cout << "3) Resolver acertijos complejos" << endl;
    cout << "4) Defender a los débiles" << endl;
    cin >> answare;

    if (answare == 1) {
        hufflepuff++;
    } else if (answare == 2) {
        slytherin++;
    } else if (answare == 3) {
        ravenclaw++;
    } else if (answare == 4) {
        gryffindor++;
    } else {
        cout << "Entrada incorrecta" << endl;
        return;
    }

    // P4
    cout << "P4) ¿Cómo prefieres resolver un conflicto? " << endl;
    cout << "1) Negociando pacíficamente" << endl;
    cout << "2) Usando astucia y estrategia" << endl;
    cout << "3) Con lógica e intelecto" << endl;
    cout << "4) Enfrentándolo con valentía" << endl;
    cin >> answare;

    if (answare == 1) {
        hufflepuff++;
    } else if (answare == 2) {
        slytherin++;
    } else if (answare == 3) {
        ravenclaw++;
    } else if (answare == 4) {
        gryffindor++;
    } else {
        cout << "Entrada incorrecta" << endl;
        return;
    }

    if (gryffindor > hufflepuff && gryffindor > ravenclaw && gryffindor > slytherin) {
        cout << "¡Tu casa es Gryffindor!" << endl;
    } else if (hufflepuff > gryffindor && hufflepuff > ravenclaw && hufflepuff > slytherin) {
        cout << "¡Tu casa es Hufflepuff!" << endl;
    } else if (ravenclaw > gryffindor && ravenclaw > hufflepuff && ravenclaw > slytherin) {
        cout << "¡Tu casa es Ravenclaw!" << endl;
    } else if (slytherin > gryffindor && slytherin > hufflepuff && slytherin > ravenclaw) {
        cout << "¡Tu casa es Slytherin!" << endl;
    } else {
        cout << "Hubo un error, no se pudo determinar la casa." << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
