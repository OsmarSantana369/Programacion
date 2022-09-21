//Programa
//Programa que lee 4 números (comprendidos entre 1 y 20) e imprime el número ingresado seguido de tantos asteriscos como indique su valor

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, i=1;
    cout<<"\t\tPrograma que lee 4 números (comprendidos entre 1 y 20) e imprime el número ingresado seguido de tantos asteriscos como indique su valor\n\n";
    cout<<"Inserte un número entero comprendido entre 1 y 20: ";
    cin>>x;

    if((x < 1) || (x > 20))
    {
        cout<<"\nError";
    }
    else
    {
        cout<<"\n"<<x<<" ";
        while(i <= x)
        {
            cout<<"* ";
            i++;
        }
    }

    cout<<"\n\n";

    return 0;
}
