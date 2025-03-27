#include<iostream>
#include<string>
using namespace std;
int main()
{
    string robot_name = "RC-21\\\\M2";
    printf("El robot %s tiene un mensaje.\n", robot_name.c_str());
    robot_name = "\"RC-21\\\\M2\" ";
    printf("El robot %s se esta incendiando.", robot_name.c_str());

    return 0;
}