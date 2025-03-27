#include<iostream>
using namespace std;
int main(){
    int day_of_week;
    cout<<"Enter the day of the week (1-7): ";
    cin>>day_of_week;
    switch(day_of_week){
        case 1:
            cout<<"Lunes";
            break;
        case 2:
            cout<<"Martes";
            break;
        case 3:
            cout<<"Miercoles";
            break;
        case 4:
            cout<<"Jueves";
            break;
        case 5:
            cout<<"Viernes";
            break;
        case 6:
            cout<<"Sabado";
            break;
        case 7:
            cout<<"Domingo";
            break;
        default:
            cout<<"Invalid input";
    }
    return 0;
}