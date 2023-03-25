/* La pieza perdida

    Andrés no da crédito. Se ha encontrado en la calle una bolsa llena de piezas de un puzzle. Lo peculiar del caso es que las piezas están numeradas por detrás, lo que implica que su anterior propietario tuvo el puzzle montado y lo desmontó etiquetando pacientemente cada ficha para hacer mucho más fácil el siguiente montaje. Tras un rato se da cuenta de por qué, tras todo ese esfuerzo, decidió deshacerse del puzzle: en la misma bolsa había una nota que decía "Falta una pieza".

    Lo que Andrés se pregunta ahora es ¿qué pieza es la que falta?

    ENTRADA :
    La entrada estará compuesta de numerosos casos de prueba. Cada uno de ellos contiene la información de un puzzle en dos líneas. La primera línea contiene el número de piezas totales del puzzle (al menos dos y como mucho 10.000), y la segunda contiene los números de todas las piezas que había en la bolsa (no necesariamente en orden). La numeración de las piezas comienza por el número 1.

    La entrada terminará con un puzzle de cero piezas, que no generará salida.
    ------------------------------------------------
    10
    1 2 3 5 6 7 8 9 10
    8
    6 4 3 2 1 8 7
    0
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba se debe escribir una línea con el número de la pieza que faltaba en la bolsa.
    ------------------------------------------------
    4
    5
    ------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{

    int caso;

    while (1)
    {
        cin >> caso;
        if (!caso)
            break;

        vector<int> misPiezas(10010, 0);

        int aux;
        for (int i = 1; i < caso; i++)
        {
            cin >> aux;
            misPiezas.at(aux) = 1;
        }

        for (int i = 1; i <= caso; i++)
        {
            if (!misPiezas.at(i))
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}