//Programa 12
//Programa que dice si un número entero es par o impar

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int numero;
    cout<<"\t\tPrograma que dice si un número entero es par o impar\n\n";
    cout<<"Introduzca un número entero:\n";
    cin>>numero;
    cout<<"\n\n";

    if(numero%2 == 0)
    {
        cout<<"El número "<<numero<<" es par";
    }
    else
    {
        cout<<"El número "<<numero<<" es impar";
    }
    cout<<"\n\n\n";
    return 0;
}
