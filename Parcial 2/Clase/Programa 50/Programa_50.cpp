//Programa 50
//Programa que inicializa un arreglo

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int n[10], i;
    cout<<"\t\tPrograma que inicializa un arreglo\n";

    for(i = 0; i < 10; i++)
        n[i] = i+1;

    cout<<"\nElemento \t Valor\n";
    for(i = 0; i < 10; i++)
    {
        cout<<"   "<<i<<" \t\t "<<n[i]<<"\n";
    }
    return 0;
}
