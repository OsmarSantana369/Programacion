//Programa 10
//Programa que nos dice las relaciones entre dos n�meros

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float n1, n2;
    cout<<"Programa que nos dice las relaciones entre dos n�meros\n\n";
    cout<<"Introduce los dos n�meros a comparar\n";
    cin>>n1;
    cout<<"\n";
    cin>>n2;
    cout<<"\n";
    if(n1==n2)
    {
        cout<<"Los n�meros "<<n2<<", "<<n1<<" son iguales. \n\n";
    }

    if(n1!=n2)
    {
        cout<<"Los n�meros "<<n2<<", "<<n1<<" son diferentes.\n\n";
    }

    if(n2>n1)
    {
        cout<<n2<<" es mayor que "<<n1<<".\n\n";
    }

    if(n2<n1)
    {
        cout<<n2<<" es menor que "<<n1<<".\n\n";
    }

    if(n1>=n2)
    {
        cout<<n1<<" es mayor o igual que "<<n2<<".\n\n";
    }

    if(n1<=n2)
    {
        cout<<n1<<" es menor o igual que "<<n2<<".\n\n";
    }

    cout<<"El programa ha terminado\n\n";

    return 0;
}
