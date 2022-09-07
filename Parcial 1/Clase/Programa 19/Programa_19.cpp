//Programa 19
//Programa que calcula funciones definidas con funciones trigonométricas, exponenciales y raíz cuadrada.
#include<iostream>
#include<math.h>

using namespace std;

#define pi 3.1416
#define e 2.7183

main()
{
    setlocale(LC_ALL, "spanish");
    float x;
    int opc;
    cout<<"\t\tPrograma que calcula funciones definidas con funciones trigonométricas, exponenciales y raíz cuadrada.\n\n";

    cout<<"Menú\n\n";

    cout<<"1.- f(x) = e^x sen(x^3)\n";
    cout<<"2.- g(x) = sqrt(tan(x + pi))\n";
    cout<<"3.- h(x) = sen^2(sqrt(x))\n";
    cout<<"4.- p(x) = e^(cot(x))\n\n";

    cout<<"Inserte el número de la opción que has elegido\n";
    cin>>opc;
    cout<<"\n";

    switch(opc)
    {
        case 1:
            cout<<"Inserte el valor a evaluar en la función f(x) = e^x sen(x^3)\n";
            cin>>x;
            cout<<"f(x) = "<<(pow(e,x))*(sin(pow(x,3)));
            break;
        case 2:
            cout<<"Inserte el valor a evaluar en la función g(x) = sqrt(tan(x + pi))\n";
            cin>>x;
            cout<<"g(x) = "<<sqrt(tan(x+pi));
            break;
        case 3:
            cout<<"Inserte el valor, mayor o igual a cero, a evaluar en la función h(x) = sen^2(sqrt(x))\n";
            cin>>x;
            cout<<"h(x) = "<<pow(sin(sqrt(x)),2);
            break;
        case 4:
            cout<<"Inserte el valor, distinto de K*pi/2 con k entero, a evaluar en la función p(x) = e^(cot(x))\n";
            cin>>x;
            cout<<"p(x) = "<<pow(e,1/tan(x));
            break;
        default:
            cout<<"No existe la opción marcada\n";
    }
    cout<<"\n\n";
    return 0;
}
