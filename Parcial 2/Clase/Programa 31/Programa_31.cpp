//Programa 31.
//Programa que muestre un menú de las tablas de multiplicar del 1 al 5, dependiendo de la tabla de elección, el programa deberá imprimir dicha tabla de multiplicar hasta el 100.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int tabla, i;
    cout<<"\t\tPrograma que muestra una tabla de multiplicar del 1 al 100.\n\n";
    cout<<"\nInserte el número correspondiente a la tabla de multiplicar, que desea visuaizar: ";
    cin>>tabla;

    for(i=1; i<=100; i++)
        cout<<"\n"<<tabla<<" x "<<i<<" = "<<tabla*i;

    cout<<"\n\n";

    return 0;
}
