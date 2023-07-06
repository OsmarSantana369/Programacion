//Programa 45
//Programa que calcula el factorial de 0 hasta 10.

#include<iostream>

using namespace std;

long factorial(long numero)
{
    if(numero == 0 || numero == 1)
        return 1;
    else
        return (numero * factorial(numero - 1));
}

main()
{
    setlocale(LC_ALL, "spanish");
    int i;
    cout<<"\t\tPrograma que calcula el factorial de 0 hasta 10\n\n";
    for(i = 0; i <= 10; i++)
        cout<<"El factorial del número "<<i<<" es: "<<factorial(i)<<"\n";

    cout<<"\n";

    return 0;
}
