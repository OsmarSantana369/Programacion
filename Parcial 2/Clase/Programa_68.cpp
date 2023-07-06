//Programa 68
//Programa que pide una cadena e imprime su longitud

#include<iostream>
#include<string.h>
#include<stdio.h>       //Para gets
#define T 100

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char A[T];
    int l;
    cout<<"\t\tPrograma que pide una cadena e imprime su longitud\n\n";
    cout<<"Introduce la cadena (frase): ";
    gets(A);
    l = strlen(A);

    cout<<"\nLa cadena con gets es '"<<A<<"' y mide: "<<l<<"\n\n";

    return 0;
}
