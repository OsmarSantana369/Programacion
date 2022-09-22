//Programa 26
//Programa que imprime los números pares e impares menores a un número dado
#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int n=1, suma = 0;
    cout<<"\t\tSea S_k = 1 + 2 + 3 +...+ k, este programa encuentra el último número k tal que la suma S_k <= 1000\n";

    do
    {
        suma = suma + n;
        cout<<"\nLa suma en k = "<<n<<" es: S_k = "<<suma;
        n++;
    }while(suma <= 1000);
    cout<<"\n\nLa suma es: S_k = "<<suma-(n-1);
    cout<<"\n\nEl número que cumple con esta condición es: k = "<<n-2<<"\n\n";

    /*int k=1, s;
    do
    {
        s=(k*(k+1))/2;
        cout<<"\nLa suma en k = "<<k<<" es: S_k = "<<s;
        k++;
    }while(s<=1000);
    cout<<"\n\nLa suma es: S_k = "<<s-(k-1);
    cout<<"\n\nEl número que cumple con esta condición es: k = "<<k-2<<"\n\n";*/ 

    return 0;
}
