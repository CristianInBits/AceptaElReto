// DURACIÓN DE BOMBILLAS LED

#include <iostream>
using namespace std;

int main()
{
    long casos, horas, encendidos;
    short horasUso;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        cin >> horas >> encendidos >> horasUso;
        if (encendidos * horasUso == horas)
            cout << "AMBAS" << endl;
        else if (encendidos * horasUso > horas)
            cout << "HORAS" << endl;
        else if (encendidos * horasUso < horas)
            cout << "ENCENDIDOS" << endl;
    }

    return 0;
}