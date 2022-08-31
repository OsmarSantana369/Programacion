//Tarea 2: Programa 1.
//Programa que calcula las ra�ces de una ecuaci�n cuadr�tica de la forma ax^2 + bx + c = 0.

#include<iostream>
#include<math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float a, b, c, discriminante, x_1R, x_2R, x_1C, x_2C;
    cout<<"\t\tPrograma que calcula las ra�ces de una ecuaci�n cuadr�tica de la forma ax^2 + bx + c = 0.\n\n";
    cout<<"Inserte los coeficientes reales de la ecuaci�n cuadr�tica:\n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    discriminante = pow(b,2)-4*a*c;
    cout<<"\n";

    if(discriminante >= 0)                                 //Si el discriminante es positivo, las ra�ces son reales. Pero si no, las ra�ces son complejas.
    {
        x_1R = (-b + sqrt(discriminante))/(2*a);           //Primer ra�z
        x_2R = (-b - sqrt(discriminante))/(2*a);           //Segunda ra�z

        if(x_1R != x_2R)
            cout<<"Las ra�ces reales de la ecuaci�n cuadr�tica son:\nx_1 = "<<x_1R<<"\nx_2 = "<<x_2R;
        else
            cout<<"La ra�z real, de multiplicidad 2, de la ecuaci�n cuadr�tica es:\nx = "<<x_1R;
    }
    else
    {
        discriminante = -discriminante;           //Haciendo la discriminante positiva y que as� se pueda hacer la ra�z cuadrada
        x_1R = -b/(2*a);                          //Parte real de la primera ra�z.
        x_1C = sqrt(discriminante)/(2*a);         //Parte compleja de la primera ra�z.

        x_2R = -b/(2*a);                          //Parte real de la segunda ra�z.
        x_2C = -x_1C;                             //Parte compleja de la segunda ra�z.

        if(x_1C >= 0)
            cout<<"Las ra�ces complejas de la ecuaci�n son:\nx_1 = "<<x_1R<<" + "<<x_1C<<"i\nx_2 = "<<x_2R<<" - "<<-x_2C<<"i";
        else
            cout<<"Las ra�ces complejas de la ecuaci�n son:\nx_1 = "<<x_1R<<" - "<<-x_1C<<"i\nx_2 = "<<x_2R<<" + "<<x_2C<<"i";
    }

    cout<<"\n\n";

    return 0;
}
