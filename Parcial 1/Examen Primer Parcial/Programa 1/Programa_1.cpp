//Examen Primer Parcial: Programa 1
/*Programa de un juego que tiene almacenado un n�mero entero entre 1 y 100, el juego pide que se adivine el n�mero secreto,
  si el usuario adivina en su primer intento, que se imprima el mensaje "Te felicito has adivinado en tu primer intento",
  de lo contrario que salga el mensaje "Este no es el n�mero, �quieres seguir intent�ndolo?".
  Al final el programa debera indicar el n�mero de intentos que realiz� el usuario para adivinar el n�mero secreto.*/

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, numsecret = 27, i = 1;         //x es el n�mero insertado por el usuario, numsecret es el n�mero secreto, i es el n�mero de intentos.
    char j;                               //j es la letra que insertar� el usuario para decidir si seguir intentando o terminar el juego.
    cout<<"\t\tJuego en el que debes adivinar el n�mero secreto que esta entre 1 y 100\n";

    cout<<"\nInserta el n�mero entero, entre 1 y 100, que creas que es el n�mero secreto: ";
    cin>>x;

    if(x == numsecret)
        cout<<"\nTe felicito has adivinado en tu primer intento.\n";
    else
    {
        cout<<"\nEste no es el n�mero, �quieres seguir intent�ndolo?\n";
        cout<<"De ser as� escriba 'o', de lo contrario escriba 'n': ";
        cin>>j;
    }

    while((j == 'o') || (j == 'O'))
    {
        j = 90;
        cout<<"\nInserta el n�mero entero, entre 1 y 100, que creas que es el n�mero secreto: ";
        cin>>x;
        if(x != numsecret)
        {
            cout<<"\nEste no es el n�mero, �quieres seguir intent�ndolo?\n";
            cout<<"De ser as� escriba 'o', de lo contrario escriba 'n': ";
            cin>>j;
        }
        i++;
    }

    cout<<"\n\tJuego terminado\n\n";
    cout<<"N�mero de intentos: "<<i<<"\n\n";

    return 0;
}
