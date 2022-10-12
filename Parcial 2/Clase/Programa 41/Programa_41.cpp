//Programa 41
//Programa que usa una función que no devuelve un resultado

#include<iostream>

using namespace std;

void mensaje ();

main()
{
    setlocale(LC_ALL, "spanish");
    cout<<"La función no regresa ningún valor ni requiere de parámetros\n\n";
    mensaje();
    cout<<"\nEl programa ha terminado\n\n";
    return 0;
}

void mensaje()
{
    cout<<"Me gusta programar en C++\n";
}
