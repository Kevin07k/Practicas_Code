#include<iostream>

using namespace std;

int main() {
    int numberN, numberA, numberB;
    double numberX, numberY;
    cin>> numberN>>numberA>>numberB>>numberX>>numberY;
    if(numberN >= numberA and numberN < numberB){
        double disc = numberX / 100;
        cout<< numberN - (numberN * disc);
    }else if (numberN >= numberB){
        double disc = numberY / 100;
        cout<< numberN - (numberN * disc);
    }else{
        cout<< numberN;
    }
    return 0;
}