#include<iostream>
using namespace std;
int main(){
    int age, years_of_experience;
    cin>>age>>years_of_experience;
    if(age >= 18){
        if(years_of_experience >= 5){
            cout<<"Director senior"<<endl;
        }else if(years_of_experience >= 3){
            cout<<"Director de proyecto"<<endl;
        }else{
            cout<<"Coordinador de proyecto"<<endl;
        }
    }else{
        cout<<"Debe ser mayor de edad para aplicar a un puesto"<<endl;
    }
    return 0;
}