// Tarea 1: Programa 2
// Programa que resuelve una ecuaci�n de primer grado

#include<iostream>
#include<math.h>

using namespace std;

main(){
    setlocale(LC_ALL, "spanish");
    double a, b;
    cout<<"\t\t\tPrograma que resuelve una ecuaci�n de primer grado\n\n";
    cout<<"Escriba los coeficientes de la ecuaci�n de primer grado de la forma ax + b = 0, donde a y b son los coeficientes.\n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"La soluci�n de la ecuaci�n es x = "<<(-b)/a<<"\n\n\n";
    return 0;
}
