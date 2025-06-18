#include<iostream>
using namespace std;
int main() {
    //No espera ningun dato
    for (int i = 0; i< 10; i++) {
        int temp;
        cin>>temp;
        if (temp == 1) {
            cout<<"Om-nom-nom :P"<<endl;
        }else {
            cout<<"No cake :("<<endl;
            break;
        }
    }
    return 0;
}