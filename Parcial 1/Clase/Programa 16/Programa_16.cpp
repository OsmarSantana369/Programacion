//Programa 16
//Programa que cambia una letra may�scula a min�scula

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char x1, y1;
    cout<<"\t\tPrograma que cambia una letra may�scula a min�scula\n\n";
    cout<<"Introduce la letra may�scula: ";
    cin>>x1;
    y1=x1+32;
    cout<<"La letra en min�sculas es: "<<y1<<"\n\n";
    return 0;
}

