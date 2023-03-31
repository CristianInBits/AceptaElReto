/*  Desembalse 

    Uno de los efectos del cambio climático es el incremento del número de lluvias torrenciales que originan inundaciones y desbordamientos de ríos. Cuando estas fuertes lluvias ocurren en zonas con embalses, éstos pueden alcanzar niveles de agua inauditos hasta la fecha y provocar la necesidad de aplicar los protocolos de seguridad previstos para escenarios nunca vistos. En 2019, la presa del embalse de Santomera, en Murcia, tuvo que abrir sus compuertas por primera vez desde que fuera construída a finales de la década de 1960.

    El riesgo de abrir las compuertas de un embalse es que, si se hace sin cuidado, podría ocasionar que se inunden poblaciones río abajo.

    Pero si no se abren, la presión del agua puede provocar la rotura completa de la presa, ocasionando catástrofes como la de Ribadelago, Torrejón o la Pantanada de Tous, de triste recuerdo.

    Para estar preparados ante crecidas, es necesario saber con antelación la máxima cantidad de agua que se puede desembalsar sin afectar a población más cercana a la presa. Esa cantidad dependerá de las alturas del terreno entre la presa y la población, que serán las primeras que se inundarán antes de que el agua llegue al pueblo.

    ENTRADA :
    El programa deberá procesar múltiples casos de prueba, leídos de la entrada estándar.

    Cada caso de prueba comienza con un número 1 ≤ D ≤ 10.000 que indica la distancia, en metros, desde la presa hasta la primera población en el cauce, río abajo. A continuación aparecen D números entre 0 y 1.000 con la altura en metros, respecto al nivel del mar, de cada tramo del cauce. El pueblo que queremos mantener a salvo de la crecida se encuentra en la última posición y se garantiza que tendrá una altura mayor o igual que todas las anteriores.

    La entrada termina con un 0, que no debe procesarse.
    --------------------------------------------------------------------
    3
    0 1 2
    5
    8 3 4 2 8
    0
    --------------------------------------------------------------------

    SALIDA :
    El programa escribirá, por cada caso de prueba, la máxima cantidad de agua que puede desembalsarse sin que llegue a afectar al pueblo. Por simplicidad, consideraremos que cada tramo tiene un metro de ancho por lo que la capacidad se dará en metros cúbicos de agua.
    --------------------------------------------------------------------
    3
    15
    --------------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int D, suma;
    int *alturas;

    while (1)
    {
        suma = 0;
        cin >> D;
        if (!D)
            break;

        alturas = new int[D];

        for (int i = 0; i < D; i++)
        {
            cin >> alturas[i];
        }
        if (D == 1)
        {
            suma = 0;
        }
        else
        {
            for (int i = D - 1; i >= 0; i--)
            {
                suma += (alturas[D - 1] - alturas[i]);
            }
        }

        cout << suma << endl;

        delete[] alturas;
    }

    return 0;
}