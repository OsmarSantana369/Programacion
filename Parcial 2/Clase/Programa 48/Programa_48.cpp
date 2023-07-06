//Programa 48
//Programa que muestra como inicializar un arreglo

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int n[10] = {15, -30, 1, 2, 8, 6, 10, 7, 20, 10}, i;
    cout<<"\t\tPrograma que muestra como inicializar un arreglo\n\n";
    cout<<"Elemento \t Valor\n";

    for(i = 0; i < 10; i++)
    {
        cout<<"   "<<i<<" \t\t  "<<n[i]<<"\n";
    }
    return 0;
}
