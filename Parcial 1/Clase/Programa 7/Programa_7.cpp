//Programa 6
//Calculadora para hacer la suma, resta, multiplicaci�n, divisi�n y m�dulo entre dos n�meros

#include<iostream>
#include<math.h>
using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, y, a;
    float z;
    cout<<"\t\t\t Programa para calcular la suma, resta, multiplicaci�n, divisi�n y m�dulo entre dos n�meros enteros\n\n";

    cout<<"Introduzca el primer n�mero entero:\n";
    cin>>x;
    cout<<"\nIntroduzca el segundo n�mero entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<" + "<<y<<" es: ";
    x+=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer n�mero entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo n�mero entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<" - "<<y<<" es: ";
    x-=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer n�mero entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo n�mero entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<"�"<<y<<" es: ";
    x*=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer n�mero entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo n�mero entero:\n";
    cin>>y;
    cout<<"\nEl resultado de "<<x<<"/"<<y<<" es: ";
    x/=y;
    cout<<x<<"\n\n";

    cout<<"\nVuelva a introducir el primer n�mero entero:\n";
    cin>>x;
    cout<<"\nVuelva a introducir el segundo n�mero entero:\n";
    cin>>y;
    cout<<"\nEl resultado del m�dulo entre "<<x<<" y "<<y<<" es: ";
    x%=y;
    cout<<x<<"\n";
    return 0;
}
