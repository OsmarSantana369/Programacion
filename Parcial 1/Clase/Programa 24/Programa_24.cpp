//Programa 24
//Programa para obtener la suma de n�meros consecutivos desde 1 hasta un n�mero indicado

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int contador, termf, total;
    contador = 1;
    total = 0;
    cout<<"\t\tPrograma para obtener la suma de n�meros consecutivos desde 1 hasta un n�mero indicado\n\n";
    cout<<"Introduzca el n�mero hasta el cual termina la suma: ";
    cin>>termf;
    while(contador <= termf)
    {
        total = total + contador;
        contador++;
    }
    cout<<"La suma es: "<<total<<"\n\n";

    return 0;
}
