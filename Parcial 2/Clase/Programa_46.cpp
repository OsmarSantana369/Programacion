//Programa 46
//Programa que muestra la posición n en la sucesión fibonacci

#include<iostream>

using namespace std;

long fibonacci(long numero)
{
    if((numero == 0) || (numero == 1))
        return numero;
    else
        return fibonacci(numero - 1) + fibonacci(numero - 2);
}

main()
{
    setlocale(LC_ALL, "spanish");
    int x;
    cout<<"\t\tPrograma que muestra la posición n en la sucesión fibonacci\n\n";
    cout<<"¿Qué posición quieres ver en la serie fibonacci? ";
    cin>>x;
    cout<<"\nLa posición del número "<<x<<" es: "<<fibonacci(x)<<"\n\n";
    return 0;
}
