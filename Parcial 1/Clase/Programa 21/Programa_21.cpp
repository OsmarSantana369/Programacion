//Programa 21
//Programa que despliega del 1 al 10

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i=1;
    cout<<"\t\tPrograma que despliega del 1 al 10 usando la instrucci�n while\n\n";

    while(i<=10)
    {
        cout<<i<<"\n";
        i++;
    }
    return 0;
}
