#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, casos;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>casos;
        if(casos  <= 4){
            cout<<4 - casos<<endl;
        }else{
            if (casos % 2 == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
    }
}

//minimo el tenemos 4 palitos para hacer el 1 + 1 = 2
// 