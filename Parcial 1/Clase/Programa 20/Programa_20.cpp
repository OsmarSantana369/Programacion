//Programa 20
//Programa que escribe mi nombre 5 veces usando la instrucción while

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i=1;
    cout<<"\t\tPrograma que escribe mi nombre 5 veces usando la instrucción while\n";

    while(i<=5)
    {
        cout<<"\n\nOsmar\n";
        i++;
        cout<<"i = "<<i;         //Valor del contador en cada repetición
    }

    cout<<"\n\nEl ciclo ha terminado\n\n";

    return 0;
}
