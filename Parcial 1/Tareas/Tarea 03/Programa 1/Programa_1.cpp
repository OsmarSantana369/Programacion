//Tarea 3: Programa 1.
//Programa que lee cinco n�meros (entre 1 y 30) y por cada n�mero le�do, se imprime una l�nea que contiene dicho n�mero con asteriscos adyacentes.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int a,b,c,d,e,i;                    //a, b, c, d, e son los n�meros que el usuario insertar�; i es un contador
    char rep;                           //valor que insertar� el usuario si desea repetir el programa
    cout<<"\t\tPrograma que lee cinco n�meros (entre 1 y 30) y por cada n�mero le�do, se imprime una l�nea que contiene dicho n�mero con asteriscos adyacentes\n\n";

    do
    {
        cout<<"\nInserte 5 n�meros enteros del 1 al 30: \n";
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
            cout<<"\n"<<a<<" no est� entre 1 y 30";

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
            cout<<"\n"<<b<<" no est� entre 1 y 30";

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
            cout<<"\n"<<c<<" no est� entre 1 y 30";

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
            cout<<"\n"<<d<<" no est� entre 1 y 30";

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
            cout<<"\n"<<e<<" no est� entre 1 y 30";

        cout<<"\n\nSi quiere que el programa se repita inserte 'h', de lo contrario, inserte cualquier otra letra: ";
        cin>>rep;
    } while ((rep=='h') || (rep=='H'));

    cout<<"\n\nPrograma terminado\n\n";

    return 0;
}
