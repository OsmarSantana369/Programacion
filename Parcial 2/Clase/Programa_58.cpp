//Programa 58
//Programa que calcula el producto punto de dos vectores

#include<iostream>
#define tam 100

using namespace std;

int i;

int producto_punto(int dimension, int vector1[], int vector2[])
{
    float suma, producto;
    for(i = 0; i <= dimension; i++)
    {
        producto = vector1[i] * vector2[i];
        suma += producto;
    }
    return suma;
}

int introducir_vector(int dimension, int vectord[], int num_vector)
{
    for(i = 1; i <= dimension; i++)
    {
        cout<<"\nIntroduce la entrada "<<i<<" del vector "<<num_vector<<": ";
        cin>>vectord[i];
    }
}

main()
{
    setlocale(LC_ALL, "spanish");
    int n;
    int vector1[tam] = {0}, vector2[tam] = {0};
    cout<<"\t\tPrograma que calcula el producto punto de dos vectores\n\n";
    cout<<"Inserte la dimensión de los dos vectores: ";
    cin>>n;

    introducir_vector(n, vector1, 1);

    cout<<"\n";

    introducir_vector(n, vector2, 2);

    cout<<"\n\nEl producto punto de los vectores es: "<<producto_punto(n, vector1, vector2)<<"\n\n";

    return 0;
}
