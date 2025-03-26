#include<iostream>
using namespace std;
int main(){
    string color_house1, color_house2, color_house3;
    int level_house1, level_house2, level_house3;

    cin>>color_house1>>level_house1;
    cin>>color_house2>>level_house2;
    cin>>color_house3>>level_house3;

    string color_house_testigo;
    int level_house_testigo;
    cin>>color_house_testigo>>level_house_testigo;


    if (color_house1 == color_house_testigo or level_house1 == level_house_testigo) cout<<"1"<<endl;
    if (color_house2 == color_house_testigo or level_house2 == level_house_testigo) cout<<"2"<<endl;
    if (color_house3 == color_house_testigo or level_house3 == level_house_testigo) cout<<"3"<<endl;
    return 0;
}