//Tarea 3: Programa 1.
//Programa que lee cinco números (entre 1 y 30) y por cada número leído, se imprime una línea que contiene dicho número con asteriscos adyacentes.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int a,b,c,d,e,i;                    //a, b, c, d, e son los números que el usuario insertará; i es un contador
    char rep;                           //valor que insertará el usuario si desea repetir el programa
    cout<<"\t\tPrograma que lee cinco números (entre 1 y 30) y por cada número leído, se imprime una línea que contiene dicho número con asteriscos adyacentes\n\n";

    do
    {
        cout<<"\nInserte 5 números enteros del 1 al 30: \n";
        cin>>a>>b>>c>>d>>e;

        if((1 <= a) && (a <= 30))
        {
            i=1;
            cout<<"\n"<<a;
            while (i<=a)
            {
                cout<<" *";
                i++;
            }
        }
        else
            cout<<"\n"<<a<<" no está entre 1 y 30";

        if((1 <= b) && (b <= 30))
        {
            i=1;
            cout<<"\n"<<b;
            while (i<=b)
            {
                cout<<" *";
                i++;
            }
        }
        else
            cout<<"\n"<<b<<" no está entre 1 y 30";

        if((1 <= c) && (c <= 30))
        {
            i=1;
            cout<<"\n"<<c;
            while (i<=c)
            {
                cout<<" *";
                i++;
            }
        }
        else
            cout<<"\n"<<c<<" no está entre 1 y 30";

        if((1 <= d) && (d <= 30))
        {
            i=1;
            cout<<"\n"<<d;
            while (i<=d)
            {
                cout<<" *";
                i++;
            }
        }
        else
            cout<<"\n"<<d<<" no está entre 1 y 30";

        if((1 <= e) && (e <= 30))
        {
            i=1;
            cout<<"\n"<<e;
            while (i<=e)
            {
                cout<<" *";
                i++;
            }
        }
        else
            cout<<"\n"<<e<<" no está entre 1 y 30";

        cout<<"\n\nSi quiere que el programa se repita inserte 'h', de lo contrario, inserte cualquier otra letra: ";
        cin>>rep;
    } while ((rep=='h') || (rep=='H'));

    cout<<"\n\nPrograma terminado\n\n";

    return 0;
}
