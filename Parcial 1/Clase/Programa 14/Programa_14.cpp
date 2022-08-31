//Programa 14
//Programa que determina la situación de un alumno de acuerdo a su promedio

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float x, y, z, w;
    cout<<"\t\tPrograma que determina la situación de un alumno de acuerdo a su promedio\n\n";
    cout<<"Da la calificación de los tres examenes parciales\n";
    cin>>x>>y>>w;
    z=(x+y+w)/3;
    cout<<"\n";

    if(z>=8)
        cout<<"Estas excento";

    if((z>=6) && (z<8))
        cout<<"Presentas examen ordinario";

    if((z>=4) && (z<6))
        cout<<"Presentas extraordinario";

    if((z>=2) && (z<4))
        cout<<"Presentas título de suficiencia";

    if(z<2)
        cout<<"Reciclarás la asignatura";

    cout<<"\n\nSin importar cuál fue su promedio, siga adelante.\n\n";
    return 0;
}
