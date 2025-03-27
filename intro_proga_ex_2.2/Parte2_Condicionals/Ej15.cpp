#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout<<"Los valores son : a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    cout<<"Permutamos: a => b, b => c , c => a"<<endl;
    int temp = a;
    a = c;
    c = b;
    b = temp;
    cout<<"Los valores despues de la permutacion son : a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    return 0;
}