//Tarea 2: Programa 5.
//Programa que calcula el pago de la luz consumida en un hogar

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float kW;
    cout<<"\t\tPrograma que calcula el pago de la luz consumida en un hogar.\n\n";
    cout<<"Ingrese la cantidad de kilowatts que ha consumido:\n";
    cin>>kW;
    cout<<"\n";

    if(kW<0)
        cout<<"El valor ingresado no es válido";
    else
    {
        if (kW<=500)
            cout<<"Su pago es de: $"<<kW*0.2;
        else
            cout<<"Su pago es de: $"<<kW;
    }
    cout<<"\n\n";
    return 0;
}
