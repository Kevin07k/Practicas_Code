#include<iostream>
using namespace std;
int main(){
    string palabra; cin>>palabra;
    bool contMay = 0, contMin = 0, contNum = 0;
    if(palabra.size() < 8){
        cout<<"El numero de digitos es menor a 8 digito."<<endl;
    }else{
        for (int i = 0; i < palabra.size(); i++)
        {
            // Preguntamos si esta en el rango que nos combiene
            if (palabra[i] >= 33 and palabra[i] <= 126)
            {
                // Preguntamos ahora si es mayuscula
                if (palabra[i] >= 65 and palabra[i] <= 90)
                {
                    // Volvermos en true por que hay 1
                    contMay = true;
                } // Preguntamos si es minuscula
                else if (palabra[i] >= 97 and palabra[i] <= 122)
                {
                    // Sumamos 1 al contador de minusculas
                    contMin = true;
                }
                else if (palabra[i] >= 48 and palabra[i] <= 57)
                {
                    // Sumamos 1 al contador de numeros
                    contNum = true;
                }
            }
        }
    }
    if(contMay and contMin and contNum){
        cout<<"La contraseña cumplio los requisitos satisfactoriamente";
    }else{
        cout<<"No cumplio con todos los requisitos";
    }

    return 0;
}