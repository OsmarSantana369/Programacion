//Tarea 4: Programa 5.
/*Programa que encuentra la primer potencia de 2 que sea mayor que 1000.
  El programa pedir� el n�mero de iteraciones a realizar por el for, si las iteraciones son suficientes encontrar� dicha potencia y deber� imprimir el mensaje:
  "2 a la ____ es igual a ___. Por lo tanto, la primera potencia de 2 que es mayor a 1000 es _____".
  De otro modo si las iteraciones no son suficientes deber� imprimir el mensaje:
  "Las iteraciones no fueron suficientes, �deseas introducir otro n�mero de iteraciones y repetir el ejercicio?" */

#include<iostream>
#include<math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int p, i, j, n;                       //p es el valor de cada potencia; i es el n�mero de iteraciones; j es un contador; n es la primer potencia de 2 que es mayor que 1000
    char rep;                             //valor que insertar� el usuario si desea repetir el programa
    cout<<"\t\tPrograma que encuentra la primer potencia de 2 que sea mayor que 1000, dado un n�mero de iteraciones";

    do
    {
        p = 0;
        rep = 90;
        cout<<"\n\nInserta la cantidad de iteraciones que crea suficientes para encontrar la primer potencia de 2 que sea mayor que 1000: ";
        cin>>i;

        for(j = 1; j <= i; j++)
        {
            if(p > 1000)
                continue;
            else
            {
                p = pow(2,j);
                cout<<"\n2 a la "<<j<<" es igual a "<<p;
                n = j;
            }
        }

        if(p > 1000)
            cout<<"\n\nPor lo tanto, la primera potencia de 2 que es mayor a 1000 es "<<n<<"\n";
        else
        {
            cout<<"\n\nLas iteraciones no fueron suficientes, �deseas introducir otro n�mero de iteraciones y repetir el ejercicio?\n";
            cout<<"Si es asi, inserta 'n', de lo contrario, inserta cualquier otra letra: ";
            cin>>rep;
        }
    }while((rep == 'n') || (rep == 'N'));

    cout<<"\n";

    return 0;
}

