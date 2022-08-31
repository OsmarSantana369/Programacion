//Programa 11
//Programa que nos dice si una persona es mayor de edad o no

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int edad;
    cout<<"\t\tPrograma que nos dice si una persona es mayor de edad o no\n\n";
    cout<<"Introduce tu edad en años\n";
    cin>>edad;
    cout<<"\n";

    if(edad>=18)
    {
        cout<<"Eres mayor de edad";
    }
    else
    {
        cout<<"Eres menor de edad";
    }
    cout<<"\n\n";
    return 0;
}
