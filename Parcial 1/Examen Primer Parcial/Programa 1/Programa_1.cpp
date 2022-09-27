//Examen Primer Parcial: Programa 1
/*Programa de un juego que tiene almacenado un número entero entre 1 y 100, el juego pide que se adivine el número secreto,
  si el usuario adivina en su primer intento, que se imprima el mensaje "Te felicito has adivinado en tu primer intento",
  de lo contrario que salga el mensaje "Este no es el número, ¿quieres seguir intentándolo?".
  Al final el programa debera indicar el número de intentos que realizó el usuario para adivinar el número secreto.*/

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, numsecret = 27, i = 1;         //x es el número insertado por el usuario, numsecret es el número secreto, i es el número de intentos.
    char j;                               //j es la letra que insertará el usuario para decidir si seguir intentando o terminar el juego.
    cout<<"\t\tJuego en el que debes adivinar el número secreto que esta entre 1 y 100\n";

    cout<<"\nInserta el número entero, entre 1 y 100, que creas que es el número secreto: ";
    cin>>x;

    if(x == numsecret)
        cout<<"\nTe felicito has adivinado en tu primer intento.\n";
    else
    {
        cout<<"\nEste no es el número, ¿quieres seguir intentándolo?\n";
        cout<<"De ser así escriba 'o', de lo contrario escriba 'n': ";
        cin>>j;
    }

    while((j == 'o') || (j == 'O'))
    {
        j = 90;
        cout<<"\nInserta el número entero, entre 1 y 100, que creas que es el número secreto: ";
        cin>>x;
        if(x != numsecret)
        {
            cout<<"\nEste no es el número, ¿quieres seguir intentándolo?\n";
            cout<<"De ser así escriba 'o', de lo contrario escriba 'n': ";
            cin>>j;
        }
        i++;
    }

    cout<<"\n\tJuego terminado\n\n";
    cout<<"Número de intentos: "<<i<<"\n\n";

    return 0;
}
