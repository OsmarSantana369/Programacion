//Programa 4
//Permite que el usuario introduzca un valor entero y lo imprime

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int y;
    cout<<"\t\tPrograma que permite que el usuario introduzca un valor entero desde el teclado y lo imprime\n";
    cout<<"\t\tIntroduce un número entero\n\t\t";
    cin>>y;
    cout<<"\t\tEl valor que el usuario introdujo desde el teclado es: "<<y;
    return 0;
}
