//Programa 16
//Programa que cambia una letra mayúscula a minúscula

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char x1, y1;
    cout<<"\t\tPrograma que cambia una letra mayúscula a minúscula\n\n";
    cout<<"Introduce la letra mayúscula: ";
    cin>>x1;
    y1=x1+32;
    cout<<"La letra en minúsculas es: "<<y1<<"\n\n";
    return 0;
}

