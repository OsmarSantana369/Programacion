//Programa 28
//Programa que despliega los n�meros del 1 al 10.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i;
    cout<<"\t\tPrograma que despliega los n�meros del 1 al 10.\n";

    for(i = 1; i <= 10; i++)
        cout<<"\n"<<i;

    cout<<"\n\n";

    return 0;
}
