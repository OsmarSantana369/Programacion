//Programa 18
//Programa que calcula las áreas de diferentes figuras geométricas

#include<iostream>

using namespace std;

#define p 3.1416

main()
{
    setlocale(LC_ALL, "spanish");
    float b, h, l ,r;
    char opc;
    cout<<"\t\tPrograma que calcula las áreas de diferentes figuras geométricas\n\n";

    cout<<"Menú\n\n";

    cout<<"A.- El área del círculo\n";
    cout<<"B.- El área del cuadrado\n";
    cout<<"C.- El área del rectángulo\n";
    cout<<"D.- El área del triángulo\n\n";

    cout<<"Inserte la letra de la opción que has elegido\n";
    cin>>opc;
    cout<<"\n";

    switch(opc)
    {
        case 'A':
            cout<<"Inserte el radio del círculo\n";
            cin>>r;
            cout<<"\nEl área del círculo es: "<<p*r*r;
            break;
        case 'B':
            cout<<"Inserte la longitud de uno de los lados del cuadrado\n";
            cin>>l;
            cout<<"\nEl área del cuadrado es: "<<l*l;
            break;
        case 'C':
            cout<<"Inserte la longitud de la base del rectángulo\n";
            cin>>b;
            cout<<"\nInserte la longitud de la altura del rectángulo\n";
            cin>>h;
            cout<<"\nEl área del rectángulo es: "<<b*h;
            break;
        case 'D':
            cout<<"Inserte la longitud de la base del triángulo\n";
            cin>>b;
            cout<<"\nInserte la longitud de la altura del triángulo\n";
            cin>>h;
            cout<<"\nEl área del triángulo es: "<<(b*h)/2;
            break;
        default:
            cout<<"No existe la opción marcada\n";
    }
    cout<<"\n\n";
    return 0;
}
