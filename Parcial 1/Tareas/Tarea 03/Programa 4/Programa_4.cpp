//Programa 4
/*Programa que lee un número entero positivo y hace la siguiente secuencia:
    Si es par, lo divide entre 2.
    Si es impar, lo multiplica por 3 y le suma 1.
  Repitiendo lo anterior hasta que el número sea 1. */

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, contador=0;                  //x es el número que el usuario insertará; contador representa el número de veces que se repite el procedimento
    cout<<"\t\tPrograma que lee un número entero positivo y hace la siguiente secuencia:\n\t\t\tSi es par, lo divide entre 2.\n\t\t\tSi es impar, lo multiplica por 3 y le suma 1.\n\t\tRepitiendo lo anterior hasta que el número sea 1.\n\n";
    cout<<"Inserte un número entero positivo: ";
    cin>>x;
    cout<<"\n";

    if(x != 1)
    {
        do
        {
            contador++;
            if(x % 2 == 0)
            {
                cout<<x<<" es par. Por lo tanto, "<<x<<"/2 = ";
                x=x/2;
                cout<<x<<".\n\n";
            }
            else
            {
                cout<<x<<" es impar. Por lo tanto, 3("<<x<<") + 1 = ";
                x=(3*x)+1;
                cout<<x<<".\n\n";
            }
        }while(x != 1);
    }
    cout<<"\nEl número de iteraciones fue: "<<contador<<".\n\n";



    return 0;
}
