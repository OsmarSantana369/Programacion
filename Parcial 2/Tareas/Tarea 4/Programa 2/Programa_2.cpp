//Tarea 4: Programa 2
//Programa que calcula el producto de los números nones del 1 al 15

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
            cout<<"\n"<<a<<" ";
            for(i = 1; i <= a; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<a<<" no está entre 1 y 30";

        if((1 <= b) && (b <= 30))
        {
            cout<<"\n"<<b<<" ";
            for(i = 1; i <= b; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<b<<" no está entre 1 y 30";

        if((1 <= c) && (c <= 30))
        {
            cout<<"\n"<<c<<" ";
            for(i = 1; i <= c; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<c<<" no está entre 1 y 30";

        if((1 <= d) && (d <= 30))
        {
           cout<<"\n"<<d<<" ";
            for(i = 1; i <= d; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<d<<" no está entre 1 y 30";

        if((1 <= e) && (e <= 30))
        {
            cout<<"\n"<<e<<" ";
            for(i = 1; i <= e; i++)
            {
                cout<<"* ";
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
