/*  ¿ Dónde está la bolita ?

    Cuando hace años estuve en Nueva York vi en varias de sus calles más concurridas a trileros y sus ganchos buscando incautos para sisarles unos dólares. Algunos usaban cartas, y otros los famosos tres cubiletes. Debajo de uno de ellos meten una bolita y luego los intercambian rápidamente entre sí. Al terminar, aceptan apuestas sobre debajo de qué cubilete está la bolita. Por muy atento que se esté, ¡siempre consiguen ganar sus apuestas!

    En breve volveré a Nueva York, y me estoy preparando para darles una lección. Llevo meses haciendo una aplicación para móvil que analiza las imágenes de la cámara y hace el seguimiento de las posiciones de los cubiletes, y funciona bastante bien. Cada vez que se realiza un intercambio, me dice las posiciones de los dos cubiletes que se han movido. Ya solo me falta que, sabiendo la posición inicial de la bolita, me diga debajo de qué cubilete ha quedado al final.

    ENTRADA :
    Cada caso de prueba comienza con dos números, el primero 2 ≤ N ≤ 100.000 indicando cuántos cubiletes está usando el trilero, y el segundo 1 ≤ I ≤ N con la posición que ocupa el cubilete debajo del que comienza la bolita. A continuación aparece una segunda línea con una sucesión de parejas de números, todos entre 1 y N. Cada pareja indica la posición de los dos cubiletes que se intercambian, y serán siempre distintos. La línea termina con dos ceros, que indican que el trilero ha dejado de mover los cubiletes.

    La entrada termina con dos ceros.
    ---------------------------------------------------------------
    3 1
    1 2 2 1 0 0
    3 1
    1 2 1 3 0 0
    0 0
    ---------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba, el programa escribirá la posición del cubilete debajo del que ha terminado la bola tras todos los movimientos del trilero.
    ---------------------------------------------------------------
    1
    2
    ---------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int N, I, pos1, pos2, aux;
    int *cubiletes;

    while (1)
    {
        cin >> N >> I;
        if (!N)
            break;

        cubiletes = new int[N]{};
        cubiletes[I - 1] = 1;

        while (1)
        {
            cin >> pos1 >> pos2;
            if (!pos1 && !pos2)
                break;
            pos1--;
            pos2--;

            aux = cubiletes[pos1];
            cubiletes[pos1] = cubiletes[pos2];
            cubiletes[pos2] = aux;
        }

        for (int i = 0; i < N; i++)
        {
            if (cubiletes[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}