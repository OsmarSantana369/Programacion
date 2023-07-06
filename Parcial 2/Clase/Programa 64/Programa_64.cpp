//Programa 64
//Programa que muestra una cadena ya definida y otra que el usuario introduce desde el teclado

#include<iostream>
//#include<string.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char cadena[20], cadena2[] = "literal de cadena";
    int i;
    cout<<"\t\tPrograma que muestra una cadena ya definida y otra que el usuario introduce desde el teclado\n\n";
    cout<<"Introduce la cadena 1: ";
    cin>>cadena;
    cout<<"\nLa cadena 1 es: "<<cadena;
    cout<<"\n\nLa cadena 2 es: "<<cadena2;
    cout<<"\n\nLa cadena 1 con espacios entre carácteres es:\n";

    for(i = 0; cadena[i] != '\0'; i++)
        cout<<cadena[i]<<"\t";

    cout<<"\n\n";

    return 0;
}
