//Examen Primer Parcial: Programa 2
//Programa que pide al usuario tres n�meros y los ordena de forma creciente.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float x,y,z;
    cout<<"\t\tPrograma que pide al usuario tres n�meros y los ordena de forma creciente.\n\n";
    cout<<"Inserte tres n�meros distintos entre si:\n";
    cin>>x>>y>>z;
    cout<<"\n";

    if(x < y)
    {
        if(y < z)
            cout<<"Los n�meros ordenados de forma creciente son: "<<x<<", "<<y<<", "<<z<<".";
        else
        {
            if(x < z)
                cout<<"Los n�meros ordenados de forma creciente son: "<<x<<", "<<z<<", "<<y<<".";
            else
                cout<<"Los n�meros ordenados de forma creciente son: "<<z<<", "<<x<<", "<<y<<".";

        }
    }
    else
    {
        if(x < z)
            cout<<"Los n�meros ordenados de forma creciente son: "<<y<<", "<<x<<", "<<z<<".";
        else
        {
            if(y < z)
                cout<<"Los n�meros ordenados de forma creciente son: "<<y<<", "<<z<<", "<<x<<".";
            else
                cout<<"Los n�meros ordenados de forma creciente son: "<<z<<", "<<y<<", "<<x<<".";
        }
    }

    cout<<"\n\n";

    return 0;
}
