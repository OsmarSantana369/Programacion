5//Programa 9

#include<iostream>

using namespace std;

main(){
    int valor;
    cout<<"Ingrese el valor de verdad, 0 o 1\n";
    cin>>valor;
    if(valor){                                      //Si el valor = 0 entonces se ignora el if, de lo contrario, se ejecuta.
        cout<<"El valor fue verdadero";
    }
    cout<<"\n";
    return 0;
}
