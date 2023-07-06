//Programa 52
//Programa que invierte un vector introducido por el usuario

#include<iostream>
#define T 100

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int vect[T], i, n;
    cout<<"\t\tPrograma que invierte un vector introducido por el usuario\n\n";
    cout<<"Inserte la dimensión del vector: ";
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        cout<<"\nIntroduce la entrada "<<i<<" del vector: ";
        cin>>vect[i];
    }

    cout<<"\nEl vector es: [";
    for(i = 1; i < n; i++)
        cout<<vect[i]<<",";

    cout<<vect[n]<<"]\n";

    cout<<"\nEl vector invertido es: [";
    for(i = n; 1 < i; i--)
        cout<<vect[i]<<",";

    cout<<vect[1]<<"]\n\n";

    return 0;
}

