//Programa 69
//Programa que compara dos cadenas y las escribe en orden alfabetico.

#include<iostream>
#include<string.h>
#include<stdio.h>       //Para gets

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char A[60], B[50], temp[60];
    int a, L1, L2;
    cout<<"\t\tPrograma que compara dos cadenas y las escribe en orden alfabetico\n\n";
    cout<<"Introduce la cadena 1: ";
    gets(A);

    cout<<"Introduce la cadena 2: ";
    gets(B);

    L1 = strlen(A);
    L2 = strlen(B);
    a = strcmp(A,B);

    if(a == 0)
        cout<<"\nLas cadenas son iguales y su longitud es: "<<L1;
    else
    {
        if(a < 0)
        {
            cout<<"\nLas cadenas ordenadas alfabeticamente son";
            cout<<"\n\t"<<A<<" y su longitud es: "<<L1;
            cout<<"\n\t"<<B<<" y su longitud es: "<<L2;
        }
        else
        {
            cout<<"\nLas cadenas ordenadas alfabeticamente son";
            strcpy(temp,A);
            strcpy(A,B);
            strcpy(B,temp);
            cout<<"\n\t"<<A<<" y su longitud es: "<<L2;
            cout<<"\n\t"<<B<<" y su longitud es: "<<L1;
        }
    }

    cout<<"\n\n";

    return 0;
}
