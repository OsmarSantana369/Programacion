//Programa 18
//Programa que calcula las �reas de diferentes figuras geom�tricas

#include<iostream>

using namespace std;

#define p 3.1416

main()
{
    setlocale(LC_ALL, "spanish");
    float b, h, l ,r;
    char opc;
    cout<<"\t\tPrograma que calcula las �reas de diferentes figuras geom�tricas\n\n";

    cout<<"Men�\n\n";

    cout<<"A.- El �rea del c�rculo\n";
    cout<<"B.- El �rea del cuadrado\n";
    cout<<"C.- El �rea del rect�ngulo\n";
    cout<<"D.- El �rea del tri�ngulo\n\n";

    cout<<"Inserte la letra de la opci�n que has elegido\n";
    cin>>opc;
    cout<<"\n";

    switch(opc)
    {
        case 'A':
            cout<<"Inserte el radio del c�rculo\n";
            cin>>r;
            cout<<"\nEl �rea del c�rculo es: "<<p*r*r;
            break;
        case 'B':
            cout<<"Inserte la longitud de uno de los lados del cuadrado\n";
            cin>>l;
            cout<<"\nEl �rea del cuadrado es: "<<l*l;
            break;
        case 'C':
            cout<<"Inserte la longitud de la base del rect�ngulo\n";
            cin>>b;
            cout<<"\nInserte la longitud de la altura del rect�ngulo\n";
            cin>>h;
            cout<<"\nEl �rea del rect�ngulo es: "<<b*h;
            break;
        case 'D':
            cout<<"Inserte la longitud de la base del tri�ngulo\n";
            cin>>b;
            cout<<"\nInserte la longitud de la altura del tri�ngulo\n";
            cin>>h;
            cout<<"\nEl �rea del tri�ngulo es: "<<(b*h)/2;
            break;
        default:
            cout<<"No existe la opci�n marcada\n";
    }
    cout<<"\n\n";
    return 0;
}
