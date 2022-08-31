//Programa 17
//Programa que cambia mi nombre de mayúsculas a minúsculas

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    char x1, x2, x3, x4, x5;
    cout<<"\t\tPrograma que cambia mi nombre de mayúsculas a minúsculas\n\n";
    cout<<"Introducir cada carácter, en mayúsculas, de mi nombre por separado:\n";
    cin>>x1>>x2>>x3>>x4>>x5;
    x1+=32;         //o
    x2+=32;         //s
    x3+=32;         //m
    x4+=32;         //a
    x5+=32;         //r
    cout<<"\n\nMi nombre en minúsculas es "<<x1<<x2<<x3<<x4<<x5<<"\n\n";
    return 0;
}
