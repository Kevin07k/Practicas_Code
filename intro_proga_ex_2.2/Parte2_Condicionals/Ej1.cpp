#include<iostream>

using namespace std;

int main() {
    string word1, word2, word3;
    cin >> word1;
    cin >> word2;
    cin >> word3;
    if(word1 <= word2 and word1 <= word3){
        cout<<word1;
    }else if(word2 <= word1 and word2 <= word3){
        cout<<word2;
    }else if(word3 <= word1 and word3 <=word2){
        cout<<word3;
    }
    return 0;
}