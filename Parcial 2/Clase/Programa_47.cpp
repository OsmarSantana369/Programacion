//Programa 47
//Programa que calcula la suma de dos números

#include<iostream>

using namespace std;

int suma(int x, int y)
{
    if(y == 1)
        return x+1;
    else
    {
        if(y > 0)
            return suma(x+1, y-1);
        else
            return suma(x-1, y+1);
    }
}

main()
{
    setlocale(LC_ALL, "spanish");
    int x, y;
    cout<<"\t\tPrograma que calcula la suma de dos números enteros\n\n";
    cout<<"Ingresa los dos números enteros a sumar:\n";
    cin>>x>>y;
    cout<<"\nLa suma de "<<x<<" y "<<y<<" es: "<<suma(x, y)<<"\n\n";
    return 0;
}
