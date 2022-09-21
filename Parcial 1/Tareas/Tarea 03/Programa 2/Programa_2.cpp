//Programa
//

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int x, contador=0, y, z;
    cout<<"\t\t\n\n";
    cout<<"Inserte un número entero positivo: ";
    cin>>x;
    cout<<"\n\n";
    y=x;
    if(x != 1)
    {
            do
        {
            contador++;
            if(x % 2 == 0)
            {
                cout<<x<<" es par. Por lo tanto, "<<x<<"/2 = ";
                x=x/2;
                cout<<x<<".\n\n";
            }
            else
            {
                cout<<x<<" es impar. Por lo tanto, 3("<<x<<") + 1 = ";
                x=(3*x)+1;
                cout<<x<<".\n\n";
            }
        }while(x != 1);
    }
    cout<<"\nEl número de iteraciones fue: "<<contador<<"\n\n";



    return 0;
}
