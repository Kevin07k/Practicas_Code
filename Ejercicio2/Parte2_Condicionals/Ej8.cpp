#include<iostream>
using namespace std;
int main(){
    int seconds;
    cin>>seconds;
    int hours = seconds/3600;
    seconds = seconds - (hours*3600);
    int minutes = seconds/60;
    seconds = seconds - (minutes*60);
    if(hours<10) cout<<"0";
    cout<<hours<<":";
    if(minutes<10) cout<<"0";
    cout<<minutes<<":";
    if(seconds<10) cout<<"0";
    cout<<seconds<<""<<endl;
    return 0;
}