//Examen Primer Parcial: Programa 3
//Programa que muestre un menú de las tablas de multiplicar del 1 al 5, dependiendo de la tabla de elección, el programa deberá imprimir dicha tabla de multiplicar hasta el 100.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int tabla, contador = 1;
    cout<<"\t\tPrograma que muestra las tablas de multiplicar del 1 al 5, dependiendo de la tabla de elección, hasta el 100.\n\n";
    cout<<"\tMenú\n";
    cout<<"1. Tabla del 1.\n";
    cout<<"2. Tabla del 2.\n";
    cout<<"3. Tabla del 3.\n";
    cout<<"4. Tabla del 4.\n";
    cout<<"5. Tabla del 5.\n";
    cout<<"\nInserte el número correspondiente a la tabla de multiplicar, que desea visuaizar: ";
    cin>>tabla;

    switch(tabla)
    {
        case 1:
        {
            cout<<"\n\nLa tabla de multiplicar del 1 es:\n";
             while(contador <= 100)
            {
                cout<<"\n1 x "<<contador<<" = "<<1*contador;
                contador++;
            }
        }
        break;

        case 2:
        {
            cout<<"\n\nLa tabla de multiplicar del 2 es:\n";
             while(contador <= 100)
            {
                cout<<"\n2 x "<<contador<<" = "<<tabla*contador;
                contador++;
            }
        }
        break;

        case 3:
        {
            cout<<"\n\nLa tabla de multiplicar del 3 es:\n";
             while(contador <= 100)
            {
                cout<<"\n3 x "<<contador<<" = "<<tabla*contador;
                contador++;
            }
        }
        break;

        case 4:
        {
            cout<<"\n\nLa tabla de multiplicar del 4 es:\n";
             while(contador <= 100)
            {
                cout<<"\n4 x "<<contador<<" = "<<tabla*contador;
                contador++;
            }
        }
        break;

        case 5:
        {
            cout<<"\n\nLa tabla de multiplicar del 5 es:\n";
             while(contador <= 100)
            {
                cout<<"\n5 x "<<contador<<" = "<<tabla*contador;
                contador++;
            }
        }
        break;

        default:
            cout<<"\nEsa opción no existe.";
    }

    cout<<"\n\n";

    return 0;
}
