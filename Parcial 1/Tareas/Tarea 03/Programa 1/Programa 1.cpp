//Tarea 3: Programa 1.
//Programa que lee cinco números (entre 1 y 30) y por cada número leído, se imprime una línea que contiene dicho número con asteriscos adyacentes

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int a,b,c,d,e,i;
    char rep;
    cout<<"\t\tPrograma que lee cinco números (entre 1 y 30) y por cada número leído, se imprime una línea que contiene dicho número con asteriscos adyacentes\n";

    do
    {
        cout<<"\ninserte 5 números enteros del 1 al 30: ";
        cin>>a>>b>>c>>d>>e;
        i=1;
        cout<<"\n"<<a;
        while (i<=18)
        {
            cout<<" *";
            i++;
        }

        cout<<"\n"<<b;
        while (i<=36)
        {
            cout<<" *";
            i++;
        }

        cout<<"\n"<<c;
        while (i<=54)
        {
            cout<<" *";
            i++;
        }

        cout<<"\n"<<d;
        while (i<=72)
        {
            cout<<" *";
            i++;
        }

        cout<<"\n"<<e;
        while (i<=90)
        {
            cout<<" *";
            i++;
        }

        cout<<"\n\nsi quiere que el programa se repita inserte 'h', de lo contrario, inserte cualquier otra letra: ";

        cin>>rep;
    } while ((rep=='h') || (rep=='H'));
    

    return 0;
}
