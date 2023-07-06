//Programa 61
//Programa que escribe una matriz dada por el usuario

#include<iostream>
#define tam 100

using namespace std;

int i,j;

void despliega_matriz(int A[tam][tam], int fila, int columna)
{
    for(i = 1; i <= fila; i++)
    {
        for(j = 1; j <= columna; j++)
            cout<<" "<<A[i][j];

        cout<<"\n";
    }
}

main()
{
    setlocale(LC_ALL, "spanish");
    int n, m;
    int arreglo[tam][tam];
    cout<<"\t\tPrograma que escribe una matriz dada por el usuario\n\n";
    cout<<"¿De cuántas filas quiere que sea la matriz? ";
    cin>>n;
    cout<<"\n¿De cuántas columnas quiere que sea la matriz? ";
    cin>>m;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            cout<<"\nInserte la entrada a["<<i<<"]["<<j<<"]: ";
            cin>>arreglo[i][j];
        }
    }

    cout<<"\nLos elementos de la matriz son:\n\n";

    despliega_matriz(arreglo, n ,m);

    return 0;
}
