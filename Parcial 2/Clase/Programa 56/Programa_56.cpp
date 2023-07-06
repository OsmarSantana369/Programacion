//Programa 56
//Programa que determina si un elemento esta en un vector y muestra su posición

#include<iostream>
#define Tam 50

using namespace std;

int busqueda_lineal(int arreglo[], int llave, int tam)
{
    int n;
    for(n = 0; n < tam; n++)
        if(arreglo[n] == llave)
            return n;
    return -1;
}

main()
{
    setlocale(LC_ALL, "spanish");
    int a[Tam], x, llave_busqueda, elemento;
    cout<<"\t\tPrograma que determina si un elemento esta en un vector y muestra su posición\n\n";

    for(x = 0; x < Tam; x++)
        a[x] = 2*x;

    cout<<"Introduzca la llave de búsqueda entera: ";
    cin>>llave_busqueda;
    elemento = busqueda_lineal(a, llave_busqueda, Tam);

    if(elemento != -1)
        cout<<"\nSe encontró la llave en el elemento: "<<elemento<<"\n\n";
    else
        cout<<"\nValor no encontrado\n\n";

    return 0;
}
