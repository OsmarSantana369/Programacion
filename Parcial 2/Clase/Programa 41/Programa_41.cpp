//Programa 41
//Programa que usa una funci�n que no devuelve un resultado

#include<iostream>

using namespace std;

void mensaje ();

main()
{
    setlocale(LC_ALL, "spanish");
    cout<<"La funci�n no regresa ning�n valor ni requiere de par�metros\n\n";
    mensaje();
    cout<<"\nEl programa ha terminado\n\n";
    return 0;
}

void mensaje()
{
    cout<<"Me gusta programar en C++\n";
}
