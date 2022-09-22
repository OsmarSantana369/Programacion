//Tarea 3: Programa 2.
//Programa que imprime el abecedario.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char i=65, j=97;                    //i es un contador para las mayúsculas y j también lo es para las minúsculas
    cout<<"\t\tPrograma que imprime el abecedario\n\n";

    while((i <= 78) && (j <= 110))
    {
        cout<<i<<j<<"\t";
        i++;
        j++;
    }

    cout<<"Ññ\t";

        while((i <= 90) && (j <= 122))
    {
        cout<<i<<j<<"\t";
        i++;
        j++;
    }

    cout<<"\n\n";

    return 0;
}
