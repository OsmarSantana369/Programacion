//Tarea 1
//Programa que convierte los d�as en horas y los kil�metros a metros

#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "spanish");
    double x, y;
    cout<<"\t\tPrograma que convierte los d�as en horas y los kil�metros a metros\n\n";
    cout<<"Inserte el n�mero de d�as\n";
    cin>>x;
    cout<<"\nInserte el n�mero de kil�metros\n";
    cin>>y;
    cout<<"\nHay "<<x*24<<" horas en "<<x<<" d�as y "<<y*1000<<" metros en "<<y<<" kil�metros\n";
    return 0;
}
