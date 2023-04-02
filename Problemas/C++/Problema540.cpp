/*  Por el hueco de la escalera

    No puedo más. Tras meses de entrenamiento esta mañana ha sido por fin la maratón para la que me he estado preparando. Más de 42 kilómetros corriendo dejan el cuerpo destrozado.

    Para empeorar las cosas, cuando he llegado por fin a casa pensando únicamente en tumbarme en la cama me he encontrado que el ascensor no funcionaba. Por delante tenía unos eternos 7 pisos a razón de 18 escalones por piso.

    Yo creía que mi situación no iba a poder empeorar más pero cuando, después de ascender casi a cuatro patas, ya había subido 6 pisos completos y 5 escalones del último, se me han escurrido las llaves de la mano y se han caído por el hueco de la escalera hasta abajo. 239 escalones hacia arriba y 113 escalones de bajada después de entrar por el portal, he llegado por fin a casa.

    ENTRADA :
    La entrada comienza con una línea con el número de casos de prueba que vendrán a continuación.

    Cada caso de prueba ocupa una única línea con cuatro números. Los dos primeros indican el piso en el que vivo y cuántos escalones hay por piso. Los dos últimos marcan el número de pisos completos y escalones adicionales que había subido en el momento de dejar caer las llaves. Ninguno de ellos es superior a 20.
    --------------------------------------------------------------------
    2
    7 18 6 5
    10 10 10 0
    --------------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba se indicará el número de escalones totales que he tenido que bajar y subir.
    --------------------------------------------------------------------
    113 239
    100 200
    --------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int casos, pisoVivo, escalonesPiso, pisosCompletos, escalonesAdd;
    cin >> casos;

    while (casos--)
    {
        cin >> pisoVivo >> escalonesPiso >> pisosCompletos >> escalonesAdd;
        cout << pisosCompletos * escalonesPiso + escalonesAdd << " "
             << pisoVivo * escalonesPiso + pisosCompletos * escalonesPiso + escalonesAdd << endl;
    }

    return 0;
}