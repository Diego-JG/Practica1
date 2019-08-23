#include<iostream>
#include<stdlib.h>
using namespace std;
struct Humano{
    char nombre[20];
    int edad;
}humano1,humano2;

int main(int argc, char** argv){

    cout<<"nombre:";
    cin.getline(humano2.nombre,20,'\n');
    cout<<"edad:";
    cin>>humano2.edad;
    //animal1.edad=10;
    cout<<humano2.nombre<<endl;
    cout<<humano2.edad<<endl;
    system("pause");
    return 0;
}
