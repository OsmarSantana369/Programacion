//Programa 60
//Programa que escribe una matriz ya definida

#include<iostream>

using namespace std;

void despliega_matriz(int A[2][3])
{
    int i,j;
    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 2; j++)
            cout<<" "<<A[i][j];

        cout<<"\n";
    }
}

main()
{
    setlocale(LC_ALL, "spanish");
    int arreglo[2][3] = {{1,2,3}, {4,5,6}};
    cout<<"\t\tPrograma que escribe una matriz ya definida\n\n";

    despliega_matriz(arreglo);

    return 0;
}
