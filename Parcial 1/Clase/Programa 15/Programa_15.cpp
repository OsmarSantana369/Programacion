//Programa 15
//Programa que cambia una letra min�scula a may�scula

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char x1, y1;
    cout<<"\t\tPrograma que cambia una letra min�scula a may�scula\n\n";
    cout<<"Introduce la letra min�scula: ";
    cin>>x1;
    y1=x1-32;
    cout<<"La letra en may�sculas es: "<<y1<<"\n\n";
    return 0;
}
