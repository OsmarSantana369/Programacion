//Programa 65
//Programa que intercambia minúsculas a mayúsculas y viceversa por medio de una función de carácteres

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char p, k;
    int i;
    cout<<"\t\tPrograma que intercambia minúsculas a mayúsculas y viceversa por medio de una función de carácteres\n\n";
    cout<<"Escribe una letra en mayúscula: ";
    cin>>p;
    p = tolower(p);
    cout<<"\nLa letra minúscula es: "<<p;

    cout<<"\n\nEscribe una letra en minúscula: ";
    cin>>k;
    k = toupper(k);
    cout<<"\nLa letra mayúscula es: "<<k<<"\n\n";

    return 0;
}
