//Programa 71
//Programa que elimina espacios de una cadena con mas de una palabra

#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char cadena[20];
    int i, t, tam;
    cout<<"\t\tPrograma que elimina espacios de una cadena con mas de una palabra\n\n";
    cout<<"Introduce la cadena: ";
    gets(cadena);

    cout<<"\nLa cadena es: "<<cadena;

    tam = strlen(cadena);

    cout<<"\n\nLa cadena sin espacios entre carácteres es: ";

    for(i = 0; cadena[i] != '\0'; i++)
    {
        if(cadena[i] == ' ')
        {
            for(t = i; t <= tam; t++)
                cadena[t] = cadena[t+1];
        }
    }

    cout<<cadena<<"\n\n";

    return 0;
}
