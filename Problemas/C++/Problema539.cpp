/*  ¡Feliz década nueva?

    Siempre que se acerca el final de un año que termina en 9 surge la misma polémica. Hay gente que opina que se termina una década y el año siguiente comenzará una nueva, y gente que cree que habrá que esperar a finales "del año 0" para terminar la década.

    ¿De dónde viene esta polémica? Allá por el siglo VI, Dionisio el Exiguo se encontraba intentando mejorar las tablas que usaban los cristianos para calcular cuándo comenzaba la Semana Santa, lo cual no era baladí. Además, por aquella época los cristianos usaban los años dioclecianos, que empezaban a contar desde la llegada al poder del tirano emperador Diocleciano el 29 de agosto de 284. Esto no le agradaba nada, y decidió comenzar a numerar los años desde el nacimiento de Cristo. Independientemente de que errara en el cálculo (al datar incorrectamente el reinado de Herodes el Grande), al primer año le dio el número 1, al utilizar numeración romana, en vez del 0, como hubiera ocurrido muy probablemente de utilizar la numeración indoarábiga actual. En consecuencia, los puristas defendemos que la primera década duró hasta finales del año 10; la siguiente abarcó desde el año 11 hasta el año 20; y así sucesivamente. De hecho, el Diccionario Panhispánico de Dudas, se pronuncia al respecto diciendo "En cuanto a las diez décadas de cada siglo, cada una de ellas comienza en un año acabado en 1 y termina en un año acabado en 0".

    Pero luego están los pragmáticos, que no atienden a razones, y defienden que las décadas acaban con los años terminados en 9, alegando que no hay motivo para arrastrar un error de 1500 años. Y defienden que hagamos lo mismo que cuando contamos la edad de nuestros hijos, que no empezamos en el 1. Además, señalan, ya nos hemos acostumbrado a expresiones como "la década de los ochenta" para referirnos a décadas que empiezan en los años terminados en 0.


    ENTRADA :
    La entrada estará formada por diversos casos de prueba, ocupando cada uno de ellos una línea. Cada caso consiste en dos números: el primero es el número asignado al primer año de nuestro calendario, y el segundo el número del año que está a punto de acabar. Ambos números estarán entre 0 y 10.000 y el segundo será siempre mayor o igual que el primero. En todos los calendarios los años se numeran de forma consecutiva a partir del primer año y las décadas están formadas por 10 años.
    --------------------------------------------------------------------
    1 2019
    7 106
    666 1234
    --------------------------------------------------------------------

    SALIDA :
    Para cada caso de prueba se escribirá una línea con la opinión de un purista. Si el próximo año comenzará una nueva década se escribirá FELIZ DECADA NUEVA, y en otro caso se escribirá TOCA ESPERAR.
    --------------------------------------------------------------------
    TOCA ESPERAR
    FELIZ DECADA NUEVA
    TOCA ESPERAR
    --------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int anyioUno, anyioActual;

    while (1)
    {
        if (scanf("%d %d", &anyioUno, &anyioActual) == EOF)
            break;

        if (!(((anyioActual - anyioUno) + 1) % 10))
            cout << "FELIZ DECADA NUEVA" << endl;
        else
            cout << "TOCA ESPERAR" << endl;
    }

    return 0;
}