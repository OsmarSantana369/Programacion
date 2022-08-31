//Programa 8
//Programa que evalúa una variable real en una función real y regresa el valor de la función evaluada en la variable

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

main (){
    setlocale(LC_ALL, "spanish");
    // Sea f = x^3 + 2/7 x^2 + 6x + 2*sqrt(x)
    float x, f;
    cout<<"\t\t\tPrograma para evaluar una variable real en la función f=x^3 + 2/7 x^2 + 6x + 2sqrt(x)\n";
    cout<<"\nInserte un número real\n";
    cin>>x;
    f=pow(x,3) + 2*(pow(x,2))/7 + 6*x + 2*sqrt(x);
    cout<<"f("<<x<<") = "<<setprecision(1)<<fixed<<f;
    return 0;
}
