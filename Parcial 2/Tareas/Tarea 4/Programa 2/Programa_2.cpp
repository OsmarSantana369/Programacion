//Tarea 4: Programa 2
//Programa que calcula el producto de los n�meros nones del 1 al 15

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
            cout<<"\n"<<a<<" ";
            for(i = 1; i <= a; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<a<<" no est� entre 1 y 30";

        if((1 <= b) && (b <= 30))
        {
            cout<<"\n"<<b<<" ";
            for(i = 1; i <= b; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<b<<" no est� entre 1 y 30";

        if((1 <= c) && (c <= 30))
        {
            cout<<"\n"<<c<<" ";
            for(i = 1; i <= c; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<c<<" no est� entre 1 y 30";

        if((1 <= d) && (d <= 30))
        {
           cout<<"\n"<<d<<" ";
            for(i = 1; i <= d; i++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<"\n"<<d<<" no est� entre 1 y 30";

        if((1 <= e) && (e <= 30))
        {
            cout<<"\n"<<e<<" ";
            for(i = 1; i <= e; i++)
            {
                cout<<"* ";
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
