//Programa 65
//Programa que intercambia min�sculas a may�sculas y viceversa por medio de una funci�n de car�cteres

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char p, k;
    int i;
    cout<<"\t\tPrograma que intercambia min�sculas a may�sculas y viceversa por medio de una funci�n de car�cteres\n\n";
    cout<<"Escribe una letra en may�scula: ";
    cin>>p;
    p = tolower(p);
    cout<<"\nLa letra min�scula es: "<<p;

    cout<<"\n\nEscribe una letra en min�scula: ";
    cin>>k;
    k = toupper(k);
    cout<<"\nLa letra may�scula es: "<<k<<"\n\n";

    return 0;
}
