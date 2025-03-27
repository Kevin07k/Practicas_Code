#include<iostream>

using namespace std;

int main() {
    // 17:00 pm 7:00 am 1bs/hora
    // 7:00 am a 17:00pm 2bs/hora
    int init_hour, end_hour;
    int cont_2 = 0, cont_1 = 0;
    cin >> init_hour >> end_hour;
//    Casos especiales
    if(init_hour > 24 or end_hour > 24 or init_hour < 0 or end_hour < 0){
        cout<<"Las horas deben estar entre 0 y 24!"<<endl;
        return 0;
    }else if(init_hour == end_hour){
        cout<<"Que extraño, no has alquilado tu bicicleta por mucho tiempo!"<<endl;
        return 0;
    }else if(end_hour < init_hour){
        cout<<"Que extraño, el inicio del alquiler es después del final..."<<endl;
        return 0;
    }
//    Iteraciones para calcular el costo
    for (int i = init_hour; i < end_hour; ++i) {
        if (i >= 7 and i < 17) {
            cont_2 += 1;
        } else {
            cont_1 += 1;
        }
    }
//    Construccion del output
    cout << "Has alquilado una bicicleta por" << endl;
    if (cont_1 == 0)
        cout << cont_1 << " horas(s) con el tarifario de 1 boliviano(s)" << endl;
    if (cont_2 == 0)
        cout << cont_2 << " horas(s) con el tarifario de 2 boliviano(s)" << endl;
    cout << "El monto total a pagar es de " << (cont_1 + (cont_2 * 2)) << " bolivianos" << endl;
    return 0;
}