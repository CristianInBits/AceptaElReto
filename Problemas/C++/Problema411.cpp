/* Sobre la tela de una araña

    Un elefante se balanceaba sobre la tela de una araña. Como veía que no se caía, fue a llamar a otro elefante.

    Dos elefantes se balanceaban sobre la tela de una araña. Como veían que no se caían, fueron a llamar a otro elefante.

    Tres elefantes se balanceaban…

    Pero, ¿hasta cuándo? ¿Cuántos elefantes pueden llegar a balancearse encima de una tela de araña antes de que se rompa? La canción no arroja ninguna luz sobre este particular, pero quizá tú puedas ayudarnos.

    ENTRADA :
    Cada caso, leído de la entrada estándar, consiste en dos líneas. La primera contiene el peso máximo soportado por la tela de araña. La segunda contiene los pesos de cada elefante, separados por espacio, en el orden en el que van llegando, y termina con un 0. Todos los números son enteros positivos menores que 109.

    La entrada acaba también con un 0, que no deberá procesarse.
    ------------------------------------------------
    10
    1 2 3 4 5 0
    20
    3 3 0
    30
    10 10 20 10 0
    0
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba, el programa indicará, en la salida estándar, el número de elefantes que pudieron balancearse en la tela, antes de que ésta se rompiera o de que no hubiera más elefantes dispuestos a arriesgarse.

    Los elefantes se van incorporando a la diversión por estricto orden de llegada.
    ------------------------------------------------
    4
    2
    2
    ------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    long long aux, contador, pesoMax;

    while (1)
    {
        contador = 0;
        cin >> pesoMax;

        if (!pesoMax)
        {
            break;
        }

        while (1)
        {
            cin >> aux;
            if (!aux)
            {
                break;
            }

            if ((pesoMax -= aux) >= 0)
            {
                contador++;
            }
        }

        cout << contador << endl;
    }

    return 0;
}