//Programa 8
//Programa que eval�a una variable real en una funci�n real y regresa el valor de la funci�n evaluada en la variable

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

main (){
    setlocale(LC_ALL, "spanish");
    // Sea f = x^3 + 2/7 x^2 + 6x + 2*sqrt(x)
    float x, f;
    cout<<"\t\t\tPrograma para evaluar una variable real en la funci�n f=x^3 + 2/7 x^2 + 6x + 2sqrt(x)\n";
    cout<<"\nInserte un n�mero real\n";
    cin>>x;
    f=pow(x,3) + 2*(pow(x,2))/7 + 6*x + 2*sqrt(x);
    cout<<"f("<<x<<") = "<<setprecision(1)<<fixed<<f;
    return 0;
}
