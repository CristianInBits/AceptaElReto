/*  Números de Lycherel

    Cuando se aburren, los aficionados a las matemáticas se dedican a jugar con los números. Eso les lleva, por ejemplo, a coger cualquier número, darle la vuelta y sumarlo a sí mismo, repitiendo el proceso una y otra vez hasta dar con un número capicúa. Por ejemplo, para el 91 llegamos a un capicúa en sólo dos pasos:

                                91 + 19 = 110
                               110 + 011 = 121

    Algunos números se resisten a alcanzar un capicúa. El 196 es el número más pequeño para el que no se ha llegado a ninguno, por más que se ha intentado. Los matemáticos no han podido demostrar que, efectivamente, no vaya a llegarse a uno. Mientras continúan buscando una demostración, los aficionados siguen sumando y sumando con la esperanza de llegar a él. Los números con los que, se sospecha, no puede alcanzarse un capicúa se conocen como números de Lychrel. Curiosamente, algunos números capicúa parecen ser también números de Lychrel.

    ENTRADA : 
    La entrada comienza con un número indicando la cantidad de casos de prueba que vendrán a continuación. Cada caso de prueba estará compuesto de un número 1 ≤ n ≤ 100.000.
    ------------------------------------------------
    4
    91
    196
    4994
    5445
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba n, el programa deberá indicar el número de iteraciones que hay que dar hasta llegar a un número capicúa, seguido del número capicúa alcanzado. Si durante el proceso se llega a un número mayor que 1.000.000.000, se deberá asumir que el capicúa no es alcanzable y escribir "Lychrel?"1.
    ------------------------------------------------
    2 121
    Lychrel?
    Lychrel?
    4 79497
    ------------------------------------------------
    1 Esta suposición es falsa y se usa para simplificar el problema. A modo de ejemplo, el número 10.677 alcanza el capicúa 4.668.731.596.684.224.866.951.378.664, de 28 dígitos, tras 53 iteraciones. Sin embargo, el programa escribirá, para ese número, "Lychrel?".
*/

#include <iostream>
using namespace std;

int main()
{
    int casos;
    cin >> casos;

    for (; casos > 0; casos--)
    {
        long long int numOriginal, numUso, numRev = 0;
        cin >> numUso;
        numOriginal = numUso;

        while (numUso != 0)
        {
            numRev = (numRev * 10) + (numUso % 10);
            numUso /= 10;
        }

        int contador = 0;
        do
        {
            numUso = numOriginal + numRev;
            numOriginal = numUso;
            numRev = 0;
            while (numUso != 0)
            {
                numRev = (numRev * 10) + (numUso % 10);
                numUso /= 10;
            }
            contador++;

        } while (!(numOriginal == numRev) && numOriginal <= 1000000000);
        if (numOriginal > 1000000000)
            cout << "Lychrel?" << endl;
        else
            cout << contador << " " << numOriginal << endl;
    }

    return 0;
}