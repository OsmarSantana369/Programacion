//Programa 54
//Programa que suma dos vectores

#include<iostream>
#define tam 100

using namespace std;

int i, n;

void suma(int a[], int b[], int m)
{
    cout<<"La suma de los dos vectores es: [";
    for(i = 1; i < m; i++)
        cout<<a[i] + b[i]<<",";

    cout<<a[m] + b[m]<<"]\n\n";
}

main()
{
    setlocale(LC_ALL, "spanish");
    int vector1[tam], vector2[tam];
    cout<<"\t\tPrograma que suma dos vectores\n\n";
    cout<<"Inserte la dimensión de los dos vectores: ";
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        cout<<"\nIntroduce la entrada "<<i<<" del vector 1: ";
        cin>>vector1[i];
    }

    cout<<"\n";

    for(i = 1; i <= n; i++)
    {
        cout<<"\nIntroduce la entrada "<<i<<" del vector 2: ";
        cin>>vector2[i];
    }

    cout<<"\n\nEl vector 1 es: [";
    for(i = 1; i < n; i++)
        cout<<vector1[i]<<",";

    cout<<vector1[n]<<"]\n";

    cout<<"\nEl vector 2 es: [";
    for(i = 1; i < n; i++)
        cout<<vector2[i]<<",";

    cout<<vector2[n]<<"]\n\n";

    suma(vector1, vector2, n);

    return 0;
}
