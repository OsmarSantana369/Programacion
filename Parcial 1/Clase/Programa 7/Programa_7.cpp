//Programa 6
//Calculadora para hacer la suma, resta, multiplicación, división y módulo entre dos números

#include<iostream>
#include<math.h>
using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, y, a;
    float z;
    cout<<"\t\t\t Programa para calcular la suma, resta, multiplicación, división y módulo entre dos números enteros\n\n";

    cout<<"Introduzca el primer número entero:\n";
    cin>>x;
    cout<<"\nIntroduzca el segundo número entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<" + "<<y<<" es: ";
    x+=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer número entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo número entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<" - "<<y<<" es: ";
    x-=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer número entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo número entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<"•"<<y<<" es: ";
    x*=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer número entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo número entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<"/"<<y<<" es: ";
    x/=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer número entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo número entero:\n";
    cin>>y;
    cout<<"\nEl resultado del módulo entre "<<x<<" y "<<y<<" es: ";
    x%=y;
    cout<<x<<"\n";
    return 0;
}
