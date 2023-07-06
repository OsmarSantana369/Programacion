//Programa 66
//Programa que intercambia dos cadenas

#include<iostream>
#include<string.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char cadena1[20], cadena2[20], temp[20];
    int i;
    cout<<"\t\tPrograma que intercambia dos cadenas\n\n";
    cout<<"Introduce la cadena 1: ";
    cin>>cadena1;

    cout<<"Introduce la cadena 2: ";
    cin>>cadena2;

    cout<<"\nLa cadena 1 es: "<<cadena1;
    cout<<"\nLa cadena 2 es: "<<cadena2;

    strcpy(temp, cadena1);
    strcpy(cadena1, cadena2);
    strcpy(cadena2, temp);

    cout<<"\n\nLa cadena 1 es: "<<cadena1;
    cout<<"\n\nLa cadena 2 es: "<<cadena2<<"\n\n";

    return 0;
}
