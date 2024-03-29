//Programa 33
/*Considerando el siguiente problema
  Una persona invierte $1000 en una cuenta de ahorros con un 5% de inter�s.
  Se asume que todo el inter�s se deja en dep�sito dentro de la cuenta.
  Calcule y depliegue el monto acumulado de la cuenta al final de cad a�o durante 10 a�os.
  Utilice la siguiente f�rmula para determinar estos montos: monto = p*(1+r)^a
  Donde: p es el monto principal,
         r es la tasa de inter�s y
         a los a�os.
  Calcular tambi�n para un inter�s del 6%, 7%, 8%, 9%, 10%.
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
        cout<<"Para un inter�s del "<<tasa*100<<"%.\n\n";
        cout<<"A�o\t\tMonto del dep�sito\n";

        for(a = 1; a <= 10; a++)
        {
            montodep = montoprin*pow(1 + tasa, a);
            cout<<a<<"\t\t"<<montodep<<"\n";
        }

        cout<<"\n\n";
    }

    return 0;
}



