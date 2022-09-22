//Programa 4
/*Programa que lee un n�mero entero positivo y hace la siguiente secuencia:
    Si es par, lo divide entre 2.
    Si es impar, lo multiplica por 3 y le suma 1.
  Repitiendo lo anterior hasta que el n�mero sea 1. */

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, contador=0;                  //x es el n�mero que el usuario insertar�; contador representa el n�mero de veces que se repite el procedimento
    cout<<"\t\tPrograma que lee un n�mero entero positivo y hace la siguiente secuencia:\n\t\t\tSi es par, lo divide entre 2.\n\t\t\tSi es impar, lo multiplica por 3 y le suma 1.\n\t\tRepitiendo lo anterior hasta que el n�mero sea 1.\n\n";
    cout<<"Inserte un n�mero entero positivo: ";
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
    cout<<"\nEl n�mero de iteraciones fue: "<<contador<<".\n\n";



    return 0;
}
