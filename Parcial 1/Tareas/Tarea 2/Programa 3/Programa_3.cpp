//Tarea 2: Programa 3.
//Programa que evalúa la siguiente función escalonada: f(x)=5 si 10<=x, f(x)=4 si 5<=x<10, f(x)=3 si 0<=x<5, f(x)=2 si -5<=x<0, f(x)=1 si -10<=x<-5.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float x;
    cout<<"\t\tPrograma que evalúa la siguiente función escalonada:\n\t\t\tf(x) = 5 si 10  <= x,\n\t\t\tf(x) = 4 si 5   <= x < 10,\n\t\t\tf(x) = 3 si 0   <= x < 5,\n\t\t\tf(x) = 2 si -5  <= x < 0,\n\t\t\tf(x) = 1 si -10 <= x < -5.\n\n";
    cout<<"Ingrese un valor real a evaluar:\n";
    cin>>x;
    cout<<"\n";

    if(-10<=x)
    {
        if(x<-5)
            cout<<"f("<<x<<") = 1";                     //-10 <= x < -5
        else
        {
            if(x<0)
                cout<<"f("<<x<<") = 2";                 //-5 <= x < 0
            else
            {
                if(x<5)
                    cout<<"f("<<x<<") = 3";             //0 <= x < 5
                else
                {
                    if(x<10)
                        cout<<"f("<<x<<") = 4";         //5 <= x < 10
                    else
                        cout<<"f("<<x<<") = 5";         //10 <= x
                }
            }
        }
    }
    else
        cout<<"f(x) no está definido en ese valor.";
    cout<<"\n\n";
    return 0;
}
