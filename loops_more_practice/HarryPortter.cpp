#include <iostream>
using namespace std;
int main()
{

    int answare = 0;
    int gryffindor, hufflepuff, ravenclaw, slytherin;
    cout << "Bievenido, el quiz del sombre magico comienza !! " << endl;
    cout << "P1) Cuando esté muerto, quiero que la gente me recuerde como: ";
    cout << "1) El Bien" << endl;
    cout << "2) El Grande" << endl;
    cout << "3) El Sabio" << endl;
    cout << "4) El Audaz" << endl;
    cin>> answare;
    if (answare == 1){
        hufflepuff++;
    }else if(answare == 2){
        slytherin++;
    }else if(answare == 3){
        ravenclaw++;
    }else if(answare == 4){
        gryffindor++;
    }else{
        cout<<"Entrada incorrecta";
    }
    string house;
    int maximo = max(hufflepuff, slytherin);
    maximo = max(ravenclaw, gryffindor);
    if (answare == 1)
    {
        cout<<"hufflepuff!!!!";
    }
    else if (answare == 2)
    {
        cout<<"slytherin!!!!";
    }
    else if (answare == 3)
    {
        cout<<"ravenclaw!!!!";
    }
    else if (answare == 4)
    {
        cout<<"gryffindor!!!!";
    }
//completar por que esta incompleto
        return 0;
}