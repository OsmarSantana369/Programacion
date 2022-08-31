//Tarea 2: Programa 1.
//Programa que calcula las raíces de una ecuación cuadrática de la forma ax^2 + bx + c = 0.

#include<iostream>
#include<math.h>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    float a, b, c, discriminante, x_1R, x_2R, x_1C, x_2C;
    cout<<"\t\tPrograma que calcula las raíces de una ecuación cuadrática de la forma ax^2 + bx + c = 0.\n\n";
    cout<<"Inserte los coeficientes reales de la ecuación cuadrática:\n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    discriminante = pow(b,2)-4*a*c;
    cout<<"\n";

    if(discriminante >= 0)                                 //Si el discriminante es positivo, las raíces son reales. Pero si no, las raíces son complejas.
    {
        x_1R = (-b + sqrt(discriminante))/(2*a);           //Primer raíz
        x_2R = (-b - sqrt(discriminante))/(2*a);           //Segunda raíz

        if(x_1R != x_2R)
            cout<<"Las raíces reales de la ecuación cuadrática son:\nx_1 = "<<x_1R<<"\nx_2 = "<<x_2R;
        else
            cout<<"La raíz real, de multiplicidad 2, de la ecuación cuadrática es:\nx = "<<x_1R;
    }
    else
    {
        discriminante = -discriminante;           //Haciendo la discriminante positiva y que así se pueda hacer la raíz cuadrada
        x_1R = -b/(2*a);                          //Parte real de la primera raíz.
        x_1C = sqrt(discriminante)/(2*a);         //Parte compleja de la primera raíz.

        x_2R = -b/(2*a);                          //Parte real de la segunda raíz.
        x_2C = -x_1C;                             //Parte compleja de la segunda raíz.

        if(x_1C >= 0)
            cout<<"Las raíces complejas de la ecuación son:\nx_1 = "<<x_1R<<" + "<<x_1C<<"i\nx_2 = "<<x_2R<<" - "<<-x_2C<<"i";
        else
            cout<<"Las raíces complejas de la ecuación son:\nx_1 = "<<x_1R<<" - "<<-x_1C<<"i\nx_2 = "<<x_2R<<" + "<<x_2C<<"i";
    }

    cout<<"\n\n";

    return 0;
}
