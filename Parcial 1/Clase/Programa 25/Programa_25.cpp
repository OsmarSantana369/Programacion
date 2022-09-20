//Programa 25
//Programa que convierte kg. a gr.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float k;
    char i;
    cout<<"\t\tEste programa convierte kg. a gr.\n";

    do
    {
        cout<<"\nInserte la cantidad de kg. a convertir\n";
        cin>>k;
        cout<<"\nLos kilogramos en gramos son: "<<k*1000<<" gr.\n\n";
        cout<<"Si quieres continuar presiona s, de lo contrario, presiona cualquier tecla: ";
        cin>>i;
    }while((i == 'S') || (i == 's'));

    cout<<"\nEl programa ha terminado\n\n";

    return 0;
}
