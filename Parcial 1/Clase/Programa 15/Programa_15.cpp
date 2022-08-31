//Programa 15
//Programa que cambia una letra minúscula a mayúscula

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char x1, y1;
    cout<<"\t\tPrograma que cambia una letra minúscula a mayúscula\n\n";
    cout<<"Introduce la letra minúscula: ";
    cin>>x1;
    y1=x1-32;
    cout<<"La letra en mayúsculas es: "<<y1<<"\n\n";
    return 0;
}
