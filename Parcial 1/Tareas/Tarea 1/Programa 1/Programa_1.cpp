//Tarea 1
//Programa que convierte los días en horas y los kilómetros a metros

#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "spanish");
    double x, y;
    cout<<"\t\tPrograma que convierte los días en horas y los kilómetros a metros\n\n";
    cout<<"Inserte el número de días\n";
    cin>>x;
    cout<<"\nInserte el número de kilómetros\n";
    cin>>y;
    cout<<"\nHay "<<x*24<<" horas en "<<x<<" días y "<<y*1000<<" metros en "<<y<<" kilómetros\n";
    return 0;
}
