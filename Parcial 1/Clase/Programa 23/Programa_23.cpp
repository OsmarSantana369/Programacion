//Programa 23
//Programa para obtener un promedio de calificaciones de un grupo mediante una repetici�n controlada por centinela

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char R;
    int contador;
    float calificacion, total, promedio;
    total = 0;
    contador = 0;
    cout<<"\t\tPrograma para obtener un promedio de calificaciones de un grupo mediante una repetici�n controlada por centinela\n\n";
    cout<<"Si quieres introducir calificaci�n escribe S o n para terminar: ";
    cin>>R;
    while(R == 'S' || R == 's')
    {
        cout<<"\nIntroduzca la calificaci�n: ";
        cin>>calificacion;
        total = total + calificacion;
        contador++;
        cout<<"\nSi quieres introducir otra calificaci�n escribe S o n para terminar: ";
        cin>>R;
    }

    if (contador != 0)
    {
        promedio = total/contador;
        cout<<"\n\nEl promedio del grupo es: "<<promedio;
    }
    else
        cout<<"No se introdujeron calificaciones\n";
    cout<<"\n\n";

    return 0;
}
