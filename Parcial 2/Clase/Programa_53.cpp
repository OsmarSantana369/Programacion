//Programa 53
//Programa que resume la información redactada en una encuesta

#include<iostream>
#define tam_resp 40
#define tam_frec 11

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int resp, rango;
    int frecuencia[tam_frec] = {0};
    int respuestas[tam_resp] = {1, 5, 2, 3, 5, 7, 9, 10, 1, 2, 4, 5, 6, 7, 3, 4, 5, 7, 4, 4, 8, 4, 7, 9, 4, 2, 4, 8, 5, 4, 8, 4, 8, 5, 8, 4, 8, 4, 8, 4};
    cout<<"\t\tPrograma que resume la información redactada en una encuesta\n\n";

    for(resp = 0; resp < tam_resp; resp++)
    {
        ++frecuencia[respuestas[resp]];
    }

    cout<<"Rango\t\tFrecuencia\n";

    for(rango = 1; rango < tam_frec; rango++)
    {
        cout<<"  "<<rango<<"\t\t    "<<frecuencia[rango]<<"\n";
    }

    return 0;
}


