//Programa 43
//Programa que calcula el promedio de tres calificaciones

#include<iostream>

using namespace std;

float suma(float a, float b, float c);       //calcula la suma de tres reales

main()
{
    setlocale(LC_ALL, "spanish");
    float cal1, cal2, cal3, promedio;
    cout<<"\t\tPrograma que calcula el promedio de tres calificaciones\n\n";
    cout<<"Inserte la primer calificaci�n: ";
    cin>>cal1;
    cout<<"Inserte la segunda calificaci�n: ";
    cin>>cal2;
    cout<<"Inserte la tercer calificaci�n: ";
    cin>>cal3;

    promedio = (suma(cal1, cal2, cal3))/3;

    cout<<"\nTu promedio es: "<<promedio<<"\n\n";
    return 0;
}

float suma(float a, float b, float c)       //calcula la suma de tres reales
{
    return a + b + c;       //regresa el valor de la suma de los tres reales
}
