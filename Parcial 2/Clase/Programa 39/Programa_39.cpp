//Programa 39
//Ejemplo: Uso de continue en una instrucci�n

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x;
    cout<<"\t\tEjemplo: Uso de continue en una instrucci�n\n\n";
    //cin>>x;

    for(x = 1; x <= 10; x++)
    {
        if(x == 5)
        {
            continue;
        }
        cout<<"\n"<<x;
    }
    cout<<"\n\nUtiliza continue para ignorar la impresi�n del valor 5\n";
    return 0;
}
