//Tarea 2: Programa 6.
//Obtener la tabla de verdad para la disyunción.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL, "spanish");
    int p_1, p_2, p_3, p_4, q_1, q_2, q_3, q_4;
    cout<<"\t\tPrograma que obtiene la tabla de verdad para la disyunción.\n\n";

    cout<<"Ingrese 0 para decir que la proposición P es falsa.\n";
    cin>>p_1;
    cout<<"Ingrese 0 para decir que la proposición Q es falsa.\n";
    cin>>q_1;
    if(!p_1 && !q_1)
        cout<<"Como P y Q son falsos entonces P v Q es falso.\n\n\n";

    cout<<"Ingrese 0 para decir que la proposición P es falsa.\n";
    cin>>p_2;
    cout<<"Ingrese 1 para decir que la proposición Q es verdadera.\n";
    cin>>q_2;
    if(p_2 || q_2)
        cout<<"Como P es falso y Q es verdadero entonces P v Q es verdadero.\n\n\n";

    cout<<"Ingrese 1 para decir que la proposición P es verdadera.\n";
    cin>>p_3;
    cout<<"Ingrese 0 para decir que la proposición Q es falsa.\n";
    cin>>q_3;
    if(p_3 || q_3)
        cout<<"Como P es verdadero y Q es falso entonces P v Q es verdadero.\n\n\n";

    cout<<"Ingrese 1 para decir que la proposición P es verdadera.\n";
    cin>>p_4;
    cout<<"Ingrese 1 para decir que la proposición Q es verdadera.\n";
    cin>>q_4;
    if(p_4 || q_4)
        cout<<"Como P y Q son verdaderos entonces P v Q es verdadero.\n\n";
    return 0;
}
