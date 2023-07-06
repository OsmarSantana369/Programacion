//Programa 59
//Programa que escribe una matriz ya definida

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i,j;
    int arreglo[2][3] = {{1,2,3}, {4,5,6}};
    cout<<"\t\tPrograma que escribe una matriz ya definida\n\n";

    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 2; j++)
            cout<<" "<<arreglo[i][j];

        cout<<"\n";
    }

    return 0;
}
