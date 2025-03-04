#include<iostream>
using namespace std;
int main(){
    string word;
    cin>>word;
    if(word.length() == 1) {
        if(word[0] >=  65 and word[0] <= 90) cout<<"upper-case alphabet";
        else if(word[0] >= 97 and word[0] <= 122) cout<<"lower-case alphabet";
        else cout<<"not an alphabet";
    }else cout<<"not an alphabet";
    return 0;
}