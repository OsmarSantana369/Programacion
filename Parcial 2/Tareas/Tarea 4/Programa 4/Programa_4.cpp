//Tarea 4: Programa 4
//Escribe un programa que para algún entero n dado por el usuario calcule el valor de: e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ... + (x^n/n!)

#include<iostream>
#include<math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i, j, n, fac = 1;
    float x, exp = 1;
    cout<<"\t\tPrograma que para algún entero n dado por el usuario calcula el valor de: e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ... + (x^n/n!)\n\n";
    cout<<"Inserte el valor de x: ";
    cin>>x;
    cout<<"Inserte el valor de n: ";
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
            fac = fac*j;
        exp = exp + pow(x,i)/fac;
    }

    cout<<"\ne^x = "<<exp<<"\n\n";

    return 0;
}
