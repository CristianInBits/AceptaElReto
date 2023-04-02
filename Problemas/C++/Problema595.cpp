/*  ¿En qué volumen?

    En muchos jueces on-line (¡Acepta el reto! entre ellos) cada problema tiene un identificador único para poderlo referenciar de manera unívoca dentro del sistema. Los identificadores son números naturales correlativos, y el primer problema recibe el número 100.

    Empezar en 100, en lugar de en 1 (o en 0), no es un capricho. Los problemas se "archivan" en volúmenes, cada uno compuesto por 100 problemas. Al asignar el número 100 al primer problema, es fácil saber en qué volumen está cualquier problema a partir de su identificador. En concreto, el primer volumen de problemas contiene a aquellos que tienen como identificador los números entre 100 y 199, el volumen 2 contiene los problemas con identificadores 200…299, etcétera.

    Dado un problema, ¿en qué volumen está?

    ENTRADA :
    La entrada comienza con un número que indica cuántos casos de prueba vendrán a continuación. Cada uno será un número entre 100 y 999.999.
    ----------------------------------------------------------------------------
    2
    100
    306
    ----------------------------------------------------------------------------

    SALIDA :
    Para cada caso de prueba, el programa deberá escribir a qué volumen pertenece el problema con ese identificador.
    ----------------------------------------------------------------------------
    1
    3
    ----------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int casos, numero;

    cin >> casos;

    for (; casos > 0; casos--)
    {
        cin >> numero;
        if (numero >= 100)
            cout << numero / 100 << endl;
    }

    return 0;
}