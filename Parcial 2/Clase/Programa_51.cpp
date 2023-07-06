//Programa 51
//Programa que suma dos vectores

#include<iostream>
#define T 100
int i, n;

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int vect1[T], vect2[T];
    cout<<"\t\tPrograma que suma dos vectores\n\n";
    cout<<"Inserte la dimensión de los dos vectores: ";
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        cout<<"\nIntroduce la entrada "<<i<<" del vector 1: ";
        cin>>vect1[i];
    }

    cout<<"\n";

    for(i = 1; i <= n; i++)
    {
        cout<<"\nIntroduce la entrada "<<i<<" del vector 2: ";
        cin>>vect2[i];
    }

    cout<<"\n\nEl vector 1 es: [";
    for(i = 1; i < n; i++)
        cout<<vect1[i]<<",";

    cout<<vect1[n]<<"]\n";

    cout<<"\nEl vector 2 es: [";
    for(i = 1; i < n; i++)
        cout<<vect2[i]<<",";

    cout<<vect2[n]<<"]\n";

    cout<<"\nLa suma de los dos vectores es: [";
    for(i = 1; i < n; i++)
        cout<<vect1[i] + vect2[i]<<",";

    cout<<vect1[n] + vect2[n]<<"]\n\n";

    return 0;
}
