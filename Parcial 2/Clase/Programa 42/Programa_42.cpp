//Programa 42
//Programa que usa una función que requiere un parámetro
#include<iostream>

using namespace std;

void tablas (int x);

main()
{
    setlocale(LC_ALL, "spanish");
    int n;
    char rep;
    cout<<"\t\tPrograma que muestra la tabla de multiplicar de un número n dado por el usuario\n";

    do
    {
        cout<<"\nInserte un número entero para obtener su tabla de multiplicar: ";
        cin>>n;

        tablas(n);

        cout<<"\nSi quiere repetir el programa inserte 'n', de lo contrario inserte cualquier otro carácter: ";
        cin>>rep;
    }while((rep == 'n') || (rep == 'N'));
    cout<<"\n";
    return 0;
}

void tablas(int x)
{
    int contador;
    float R;
    cout<<"La tabla de multiplicar del "<<x<<" es:\n\n";
    for(contador = 1; contador <= 10; contador++)
    {
        R = x*contador;
        cout<<x<<" * "<<contador<<" = "<<R<<"\n";
    }
}

