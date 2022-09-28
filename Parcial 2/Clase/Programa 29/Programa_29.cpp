//Programa 29
//Programa que despliega los números del 10 al 0.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i;
    cout<<"\t\tPrograma que despliega los números del 10 al 0.\n";

    for(i = 10; i >= 0; i--)
        cout<<"\n"<<i;

    cout<<"\n\n";

    return 0;
}
