//Tarea 2: Programa 2.
//Programa que compara tres números reales distintos y los ordena de mayor a menor.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float x, y, z;
    cout<<"\t\tPrograma que compara tres números reales distintos y los ordena de mayor a menor.\n\n";
    cout<<"Ingrese tres números reales:\n";
    cin>>x>>y>>z;
    cout<<"\nLos números ordenados de mayor a menor son:\n";

    if(x>y)
    {
        if(z>y)
        {
            if(x>z)
                cout<<x<<"\n"<<z<<"\n"<<y<<"\n\n";
            else
                cout<<z<<"\n"<<x<<"\n"<<y<<"\n\n";
        }
        else
            cout<<x<<"\n"<<y<<"\n"<<z<<"\n\n";
    }
    else
    {
        if(y>z)
        {
            if(x>z)
                cout<<y<<"\n"<<x<<"\n"<<z<<"\n\n";
            else
                cout<<y<<"\n"<<z<<"\n"<<x<<"\n\n";
        }
        else
            cout<<z<<"\n"<<y<<"\n"<<x<<"\n\n";
    }

    return 0;
}
