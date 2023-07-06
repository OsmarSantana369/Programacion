//Programa 55
//Programa que modifica los valores de un arreglo completo y un elemento del arreglo

#include<iostream>
#define Tam 5

using namespace std;

void modifica_arreglo(int b[], int tam)
{
    int j;
    for(j = 0; j < tam; j++)
        b[j] *= 2;
}

int modifica_elemento(int t)
{
    int e;
    e = t*2;
    return e;
}

main()
{
    int a[Tam] = {0, 1, 2, 3, 4};
    int i;
    cout<<"\t\tPrograma que modifica los valores de un arreglo completo y un elemento del arreglo\n\n";
    cout<<"Los valores del arreglo original son\n";

    for(i = 0; i < Tam; i++)
        cout<<a[i]<<"\t";

    modifica_arreglo(a, Tam);

    cout<<"\n\nLos valores del arreglo modificado son\n";

    for(i = 0; i < Tam; i++)
        cout<<a[i]<<"\t";

    cout<<"\n\nEl valor de a[3] es: "<<a[3];

    a[3] = modifica_elemento(a[3]);

    cout<<"\n\nEl elemento de a[3] modificado es: "<<a[3]<<"\n\n";

    return 0;
}
