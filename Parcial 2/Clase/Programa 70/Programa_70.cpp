//Programa 70
//Programa que muestra una lista de cadenas

#include<iostream>
#include<string.h>
#include<stdio.h>       //Para gets
#define Tam 30

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char nombres[Tam][30];
    int n,i;
    cout<<"\t\tPrograma que muestra una lista de cadenas\n\n";
    cout<<"Inserte el número de elementos de la lista: ";
    cin>>n;
    cout<<"Inserte las cadenas:\n";

    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        gets(nombres[i]);
        fflush(stdin);
    }

    cout<<"\nLos nombres son: \n";

    for(i = 0; i < n; i++)
    {
        cout<<nombres[i]<<"\n";
    }

    return 0;
}
