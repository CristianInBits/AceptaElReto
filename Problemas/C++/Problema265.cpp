/*  Suma descendente

    Llamamos suma descendente de un número cualquiera a la suma de los números resultantes de ir quitando de forma reiterada el dígito más significativo de dicho número. Por ejemplo, si tenemos un número de 6 dígitos, ABCDEF, entonces la suma descendente será el resultado de la suma:

                                ABCDEF + BCDEF + CDEF + DEF + EF + F

    Por ejemplo, la suma descendente del número 4.578 es igual a 4.578 + 578 + 78 + 8 = 5.242. Realiza un programa que calcule la suma descendente de un número dado.

    ENTRADA :
    La entrada estará formada por múltiples casos de prueba y finalizará con el valor 0. Cada caso de prueba estará formado por un número entre 1 y 1.000.000.000.
    ------------------------------------------------
    4578
    5083
    999
    0
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba el programa escribirá su suma descendente.
    ------------------------------------------------
    5242
    5252
    1107
    ------------------------------------------------
*/

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    string numero;
    string aux;
    long long int suma;
    long long int n;

    while (1)
    {
        cin >> numero;
        if (numero == "0")
            break;

        suma = 0;

        for (int i = 0; i < numero.size(); i++)
        {
            aux = numero.substr(i, numero.size() - i);
            n = stoll(aux);
            suma += n;
        }

        cout << suma << endl;
    }

    return 0;
}