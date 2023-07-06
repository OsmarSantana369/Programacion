//Programa 44
//Programa que calcula el factorial de un n�mero entero

#include<iostream>

using namespace std;

long factorial(long y);

main()
{
    setlocale(LC_ALL, "spanish");
    long x;
    cout<<"\t\tPrograma que calcula el factorial de un n�mero entero\n\n";
    cout<<"Inserte el n�mero entero del cual desea obtener el factorial: ";
    cin>>x;
    cout<<"\nEl factorial del n�mero "<<x<<" es: "<<factorial(x)<<"\n\n";

    return 0;
}

long factorial(long y)
{
    int i;
    long fac = 1;

    for(i = 1; i <= y; i++)
        fac *= i;

    return fac;
}

