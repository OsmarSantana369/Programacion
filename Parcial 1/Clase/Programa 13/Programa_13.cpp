//Programa 13
//Programa que

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float calf;
    cout<<"\tPROGRAMA QUE NOS DICE LA CONDICIÓN ACADÉMICA DE UN ALUMNO\n\n";
    cout<<"Inserte la clificación:\n";
    cin>>calf;
    cout<<"\n\n";

    if(calf>=8)
    {
        cout<<"No presentas examen final\n\n";
    }
    else
    {
        if(calf>=6)
        {
            cout<<"Presentas examen final\n\n";
        }
        else
        {
            cout<<"No tienes derecho a final\n\n";
        }
    }
    cout<<"El programa terminó\n\n";

    return 0;
}
