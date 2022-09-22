//Tarea 3: Programa 3.
//Programa que encuentra la primera potencia de 2 que sea mayor que 1000.

#include<iostream>
#include<math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int p=0, i=1;                       //p es el valor de cada potencia e i es un contador
    cout<<"\t\tPrograma que encuentra la primera potencia de 2 que sea mayor que 1000\n";

    while(p <= 1000)
    {
        p=pow(2,i);
        cout<<"\nLa potencia de 2^"<<i<<" es: "<<p;
        i++;
    }

    cout<<"\n\nAsí, 2^"<<i-2<<" es menor que 1000\n\n";

    return 0;
}
