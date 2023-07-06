//Programa 49
//Programa que pide los elementos de un vector de tamaño 10 y los despliega

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int n[10] = {15, -30, 1, 2, 8, 6, 10, 7, 20, 10}, i;
    cout<<"\t\tPrograma que pide los elementos de un vector de tamaño 10 y los despliega\n";

    for(i = 0; i < 10; i++)
    {
        cout<<"\nIntroduce el elemento "<<i<<" del vector: ";
        cin>>n[i];
    }

    cout<<"\nElemento \t Valor\n";
    for(i = 0; i < 10; i++)
    {
        cout<<"   "<<i<<" \t\t "<<n[i]<<"\n";
    }
    return 0;
}
