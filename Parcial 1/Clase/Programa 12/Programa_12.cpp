//Programa 12
//Programa que dice si un n�mero entero es par o impar

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int numero;
    cout<<"\t\tPrograma que dice si un n�mero entero es par o impar\n\n";
    cout<<"Introduzca un n�mero entero:\n";
    cin>>numero;
    cout<<"\n\n";

    if(numero%2 == 0)
    {
        cout<<"El n�mero "<<numero<<" es par";
    }
    else
    {
        cout<<"El n�mero "<<numero<<" es impar";
    }
    cout<<"\n\n\n";
    return 0;
}
