//Programa 39
//Programa que imprime n�meros pares hasta uno dado

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, i;
    cout<<"\t\tPrograma que imprime n�meros pares hasta uno dado\n\n";
    cout<<"Inserte un n�mero: ";
    cin>>x;

    for(i = 1; i <= x; i++)
    {
        if(i%2 != 0)
        {
            continue;
        }
        cout<<"\n"<<i;
    }

    cout<<"\n\n";

    return 0;
}
