/*  Abuelas falsas
    Hay una conjetura que dice que todas las abuelas del mundo cuando van a decir el nombre de un nieto, dicen primero el nombre de muchos otros nietos antes de decir el nombre correcto.

    El gobierno ha ideado una prueba para saber si una persona mayor es abuela o no. La prueba consiste en enseñar una foto de un nieto y preguntar cómo se llama ese nieto, anotando los nombres que dice la mujer.

    Si la mujer sólo ha dicho el nombre del nieto al final de la lista de nombres se considera que es una abuela verdadera, en caso contrario es una falsa abuela.

    ENTRADA :
    La entrada comienza por el número N de pruebas realizadas a distintas personas mayores.

    Cada una de esas pruebas ocupa una única línea. Comienza con el nombre real del nieto de la foto. A continuación viene un número positivo que indica la cantidad de nombres que dijo la abuela en cuestión (como mucho 100), al que le sigue cada uno de esos nombres.

    Para evitar confusiones, tanto el nombre real como los nombres dichos por las abuelas aparecerán siempre en minúsculas y no contendrán espacios ni tildes o eñes. La longitud de cada nombre no excederá los 10 caracteres.
    ------------------------------------------------
    3
    mireia 5 ximo vicente maria vicente mireia
    juan 2 juan maria
    ximo 1 ximo
    ------------------------------------------------

    SALIDA :
    Por cada prueba se escribirá una única línea con la cadena VERDADERA si la persona encuestada es una abuela real y FALSA si es una farsante.
    ------------------------------------------------
    VERDADERA
    FALSA
    FALSA
    ------------------------------------------------
*/

#include <iostream>
#include <cstring>

#define maximo 11

using namespace std;

int main()
{
    long N, n, contador;
    char nombreReal[maximo], nombres[maximo];

    cin >> N;

    for (long i = 0; i < N; i++)
    {
        contador = 0;
        cin >> nombreReal;

        cin >> n;

        for (long i = 0; i < n; i++)
        {
            cin >> nombres;
            if (n == 1)
            {
                break;
            }
            if (!strcmp(nombreReal, nombres))
            {
                if (i == n - 1)
                {
                    contador++;
                }
                else
                    contador--;
            }
        }
        if (contador == 1)
            cout << "VERDADERA" << endl;
        else
            cout << "FALSA" << endl;
    }

    return 0;
}