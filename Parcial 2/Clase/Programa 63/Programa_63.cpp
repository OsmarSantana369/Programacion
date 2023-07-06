//Programa 63
//Programa que suma dos matrices

#include<iostream>
#define t 100

using namespace std;

int i,j;

void escribe(int a[t][t], int renglon, int columna)
{
    for(i = 0; i <= renglon-1; i++)
    {
        for(j = 0; j <= columna-1; j++)
            cout<<" "<<a[i][j];

        cout<<"\n";
    }
}

void suma(int b[t][t], int h[t][t], int renglon, int columna)
{
    int k[t][t];
    for(i = 0; i < renglon; i++)
    {
        for(j = 0; j < columna; j++)
            k[i][j] = b[i][j] + h[i][j];

        cout<<"\n";
    }
    escribe(k, renglon, columna);
}

void matriz(int a[t][t], int renglon, int columna)
{
    for(i = 0; i <= renglon-1; i++)
    {
        for(j = 0; j <= columna-1; j++)
        {
            cout<<"\nInserte la entrada a["<<i+1<<"]["<<j+1<<"]: ";
            cin>>a[i][j];
        }
        cout<<"\n";
    }
}

main()
{
    setlocale(LC_ALL, "spanish");
    int r, c;
    int A[t][t], B[t][t];
    cout<<"\t\tPrograma que suma dos matrices\n\n";
    cout<<"Inserte el número de renglones de las matrices A y B: ";
    cin>>r;
    cout<<"\nInserte el número de columnas de las matrices A y B: ";
    cin>>c;

    cout<<"\nInserte los elementos de la matriz A:\n";
    matriz(A, r, c);

    cout<<"\nInserte los elementos de la matriz B:\n";
    matriz(B, r, c);

    cout<<"\nLos elementos de la matriz A son:\n\n";
    escribe(A, r, c);

    cout<<"\nLos elementos de la matriz B son:\n\n";
    escribe(B, r, c);

    cout<<"\nLa suma de las matrices es:";

    suma(A,B,r,c);

    return 0;
}
