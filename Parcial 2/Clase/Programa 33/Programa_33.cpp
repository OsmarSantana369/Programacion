//Programa 33
/*Considerando el siguiente problema
  Una persona invierte $1000 en una cuenta de ahorros con un 5% de interés.
  Se asume que todo el interés se deja en depósito dentro de la cuenta.
  Calcule y depliegue el monto acumulado de la cuenta al final de cad año durante 10 años.
  Utilice la siguiente fórmula para determinar estos montos: monto = p*(1+r)^a
  Donde: p es el monto principal,
         r es la tasa de interés y
         a los años.
  Calcular también para un interés del 6%, 7%, 8%, 9%, 10%.
*/

#include<iostream>
#include<math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    double montodep, montoprin = 1000, tasa;
    int a;

    for(tasa = 0.05; tasa <= 0.1; tasa += 0.01)
    {
        cout<<"Para un interés del "<<tasa*100<<"%.\n\n";
        cout<<"Año\t\tMonto del depósito\n";

        for(a = 1; a <= 10; a++)
        {
            montodep = montoprin*pow(1 + tasa, a);
            cout<<a<<"\t\t"<<montodep<<"\n";
        }

        cout<<"\n\n";
    }

    return 0;
}



