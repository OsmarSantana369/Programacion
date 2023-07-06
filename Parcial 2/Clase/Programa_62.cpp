//Programa 62
//Programa que escribe una matriz y la muestra con una función

#include<iostream>
#define T 10

using namespace std;

int i,j;

void escribe(int a[T][T], int renglon, int columna)
{
    for(i = 0; i <= renglon-1; i++)
    {
        for(j = 0; j <= columna-1; j++)
            cout<<" "<<a[i][j];

        cout<<"\n";
    }
}

void matriz(int a[T][T], int renglon, int columna)
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
    int A[T][T];
    cout<<"\t\tPrograma que escribe una matriz dada por el usuario\n\n";
    cout<<"¿De cuántos renglones quiere que sea la matriz? ";
    cin>>r;
    cout<<"\n¿De cuántas columnas quiere que sea la matriz? ";
    cin>>c;

    cout<<"\n\nInserte los valores de la matriz:\n";
    matriz(A, r, c);

    cout<<"\nLos elementos de la matriz son:\n\n";
    escribe(A, r ,c);

    cout<<"\n";

    return 0;
}
