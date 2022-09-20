//Programa 26
//Programa que imprime los números pares e impares menores a un número dado
#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int n, p=0, q=1, i=0, j=0;
    cout<<"\t\tPrograma que imprime los números pares e impares menores a un número dado\n";
    cout<<"\nInserte el número, mayor o igual a uno, hasta el que se mostrarán los números pares e impares\n";
    cin>>n;

    cout<<"Los números pares son:";
    do
    {
        cout<<"\t"<<p;
        p+=2;
        i++;
    }while(n>=p);
    cout<<"\n\nEl total de números pares es "<<i<<".\n\n\n";

    cout<<"Los números impares son:";
    do
    {
        cout<<"\t"<<q;
        q+=2;
        j++;
    }while(n>=q);
    cout<<"\n\nEl total de números impares es "<<j<<".\n\n";

    return 0;
}
