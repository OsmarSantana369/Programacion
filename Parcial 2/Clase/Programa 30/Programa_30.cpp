//Programa 30
//Programa que despliega los números pares del 2 al n

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int i, n;
    cout<<"\t\tPrograma que despliega los números pares del 2 al n\n\n";
    cout<<"Dame el número: ";
    cin>>n;

    for(i=0; i<=n; i+=2)
        cout<<"\n"<<i;

    cout<<"\n\n";

    return 0;
}
