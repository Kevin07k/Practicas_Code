#include<iostream>
using namespace std;

int main() {
    int init_posx, init_posy;
    cin>>init_posx>>init_posy;
    int posx, posy;
    cin>>posx>>posy;

    int pasosx = 0, pasosy = 0;
    pasosx = abs(init_posx - posx);
    pasosy = abs(init_posy - posy);
    if (pasosx == pasosy) {
        cout<<"YES"<<endl;
    }else if (init_posx  == posx) {
        cout<<"YES"<<endl;
    }else if (init_posy  == posy) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}
