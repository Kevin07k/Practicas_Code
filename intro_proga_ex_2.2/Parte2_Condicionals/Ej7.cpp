#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double radius;
    double pi = 3.141592653589793238462643383279502884197;
    cout << "Enter the radius of the esfera: ";
    cin >> radius;

    if (radius > 0) {
        cout << "The volume of the sphere is: " <<fixed<<setprecision(6) <<(4 * pi * (radius * radius)) << endl;
    }else{
        cout<<"Error: Radius cannot be negative."<<endl;
    }
        return 0;
    }