/*  Poniendo la mesa

    Los invitados están al llegar y la mesa sigue sin poner. En la mesa de la cocina, tus padres han preparado ya todo lo que hay que trasladar: pilas de platos, cubiertos y copas. Por delante, un montón de paseos de la cocina al salón y muy poco tiempo.

    Como las prisas en este caso no son buenas (que haya que pararlo todo para recoger del pasillo los pedazos de una copa rota puede ser desastroso) la única solución es paralelizar el trabajo. Tu hermano pequeño es el candidato perfecto para ayudarte.

    Empezaréis por llevar todas las copas. Como son delicadas, tu hermano las llevará de una en una. Y para que se sienta "mayor" le has dicho que tú harás lo mismo: las llevarás también de una en una a no ser que el número de copas que queden en la cocina sea par. En ese caso en lugar de una, llevarás dos.

    Si el primer paseo lo da tu hermano y os vais alternando los viajes, ¿cuántos necesitaréis para llevar todas las copas?

    ENTRADA :
    La entrada está compuesta de distintos casos de prueba, cada uno en una línea. En cada una de ellas aparecerá el número de copas que hay que trasladar (hasta 10.000).

    La entrada termina con una línea con un cero, que no deberá procesarse.
    ---------------------------------------------------------------
    1
    3
    0
    ---------------------------------------------------------------

    SALIDA : 
    Por cada caso de prueba se indicará el número de paseos que hay que dar en total, teniendo en cuenta que el primer paseo lo da el hermano pequeño.
    ---------------------------------------------------------------
    1
    2
    ---------------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main()
{

    int copas, paseos;

    while (1)
    {
        paseos = 0;
        cin >> copas;
        if (!copas)
        {
            break;
        }

        while (copas)
        {
            copas--; // el hermano
            paseos++;
            if (!copas)
            {
                break;
            }

            if (!(copas % 2))
            {
                copas -= 2; // tu
                paseos++;
            }
            else
            {
                copas--;
                paseos++;
            }
        }

        cout << paseos << endl;
    }

    return 0;
}