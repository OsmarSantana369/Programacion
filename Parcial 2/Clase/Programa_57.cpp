//Programa 57
//Programa que suma dos vectores

#include<iostream>
#define T 100
int i, n;

using namespace std;

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
    int vect1[T] = {0}, vect2[T] = {0};
    cout<<"\t\tPrograma que suma dos vectores\n\n";
    cout<<"Inserte la dimensión de los dos vectores: ";
    cin>>n;

    introducir_vector(n, vect1, 1);

    cout<<"\n";

    introducir_vector(n, vect2, 2);

    cout<<"\n\nEl vector 1 es: [";
    for(i = 1; i < n; i++)
        cout<<vect1[i]<<",";

    cout<<vect1[n]<<"]\n";

    cout<<"\nEl vector 2 es: [";
    for(i = 1; i < n; i++)
        cout<<vect2[i]<<",";

    cout<<vect2[n]<<"]\n";

    cout<<"\nLa suma de los dos vectores es: [";
    for(i = 1; i < n; i++)
        cout<<vect1[i] + vect2[i]<<",";

    cout<<vect1[n] + vect2[n]<<"]\n\n";

    return 0;
}
