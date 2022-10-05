//Tarea 4: Programa 3
//Programa que imprime patrones de manera separada, uno debajo del otro, la base de cada patron es dada por el usuario

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i, j, k, n;
    cout<<"\t\tPrograma que imprime patrones de manera separada, uno debajo del otro, la base de cada patron es dada por el usuario\n\n";
    cout<<"Inserte la cantidad de asteriscos que tendrá cada base: ";
    cin>>n;

    for(i = n; 1 <= i; i--)
    {
        cout<<"\n\n";
        for(j = 0; j <= n-i-1; j++)
            cout<<" ";
        for(j = 1; j <= i; j++)
            cout<<"*";
    }

    cout<<"\n\n";

    for(i = 1; i <= n; i++)
    {
        cout<<"\n\n";
        for(j = n-i-1; 0 <= j; j--)
            cout<<" ";
        for(j = 1; j <= i; j++)
            cout<<"*";
    }

    cout<<"\n\n";

    for(i = 1; i <= n; i++)
    {
        cout<<"\n\n";
        for(j = 1; j <= i; j++)
            cout<<"*";
    }

    cout<<"\n\n";

    for(i = n; 1 <= i; i--)
    {
        cout<<"\n\n";
        for(j = 1; j <= i; j++)
            cout<<"*";
    }

    cout<<"\n\n";

    return 0;
}
