//Programa 26
//Programa que imprime los n�meros pares e impares menores a un n�mero dado
#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int n, p=0, q=1, i=0, j=0;
    cout<<"\t\tPrograma que imprime los n�meros pares e impares menores a un n�mero dado\n";
    cout<<"\nInserte el n�mero, mayor o igual a uno, hasta el que se mostrar�n los n�meros pares e impares\n";
    cin>>n;

    cout<<"Los n�meros pares son:";
    do
    {
        cout<<"\t"<<p;
        p+=2;
        i++;
    }while(n>=p);
    cout<<"\n\nEl total de n�meros pares es "<<i<<".\n\n\n";

    cout<<"Los n�meros impares son:";
    do
    {
        cout<<"\t"<<q;
        q+=2;
        j++;
    }while(n>=q);
    cout<<"\n\nEl total de n�meros impares es "<<j<<".\n\n";

    return 0;
}
