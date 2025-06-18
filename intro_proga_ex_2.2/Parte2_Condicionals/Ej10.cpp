#include<iostream>
using namespace std;
int main(){
    unsigned int number1, number2;
    cin>>number1>>number2;
    unsigned int sum = number1 + number2;
    unsigned int temp = sum, mult = 0;
    while(temp > 0){
        mult +=1;
        temp /= 10;
    }
    sum = mult * sum;
    cout<<sum<<endl;

    return 0;
}