//Tarea 4: Programa 5
//Programa que calcula el producto de los números nones del 1 al 15

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i, prod = 1;
    cout<<"\t\tPrograma que calcula el producto de los números nones del 1 al 15\n\n";

    for(i = 1; i <= 15; i+=2)
    {
        prod = prod*i;
    }

    cout<<"El producto de los números nones del 1 al 15 es: "<<prod<<"\n\n";

    return 0;
}

