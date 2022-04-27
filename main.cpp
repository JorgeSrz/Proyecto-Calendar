#include <iostream>
#include <memory>
#include "Date.h"

using namespace std;

int main() {
    bool terminado = true;
    int m, d, y, option, resta;
        
        while(terminado == true){
            cout<<"Ingrese mes(1-12): ";
            cin>>m;
            cout<<"Ingrese dia: ";
            cin>>d;
            cout<<"Ingrese ano: ";
            cin>>y;
            while(d>30 && (m==4 || m==6 || m==9 || m==11) || d>31 || d<1 || m>12 || m<1 || d>29 && m==2){
                cout<<"Fecha invalida, vuelva a escribir"<<endl;
                cout<<"Ingrese mes(1-12): ";
                cin>>m;
                cout<<"Ingrese dia: ";
                cin>>d;
                cout<<"Ingrese ano: ";
                cin>>y;
            }
            cout<<"Cuantos dias desea restarle: ";
            cin>>resta;
        
            Date today(m, d, y);
            today.formatDate();

            Date* day2 = (today - resta);
            day2->formatDate();

            ++today;
            today.formatDate();
            --today;
            today.formatDate();

            cout<<"Desea ingresar otra fecha: "<<endl;
            cout<<"1. Si"<<endl;
            cout<<"2. No"<<endl;
            cin>>option;

            if(option == 2){
                terminado = false;
            }
        }
}