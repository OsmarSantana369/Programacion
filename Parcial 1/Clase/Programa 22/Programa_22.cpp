//Programa 22
//Programa que despliega el promedio de 10 calificaciones

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float calf, total, promedio;
    total = 0;
    int contador = 1;
    cout<<"\t\tPrograma que despliega el promedio de 10 calificaciones\n\n";

    while(contador<=10)
    {
        cout<<"Introduzca la calificación "<<contador<<": ";
        cin>>calf;
        total = total + calf;
        contador++;
    }

    promedio = total/10;
    cout<<"\nEl promedio es "<<promedio<<"\n\n";

    return 0;
}
