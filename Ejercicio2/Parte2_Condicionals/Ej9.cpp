#include "iostream"

using namespace std;
int main(){
    string word1, word2, word3,word4,word5;
    cin>>word1>>word2>>word3>>word4>>word5;
    cout<<word1[0]<<word2[0]<<word3[0]<<word4[0]<<word5[0]<<endl;
    if (word1[0] == word5[word5.length()-1]){
        cout<<"Hemos encontrado algo!"<<endl;
    }else{
        cout<<"Aun sin suerte"<<endl;
    }
    return 0;
}