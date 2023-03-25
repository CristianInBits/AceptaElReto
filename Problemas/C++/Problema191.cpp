/*  Los problemas de ser rico

    Aunque no acostumbra a pasearse por las cocinas, tiene sirvientes para eso, una noche de insomnio el magnate Rick Achón sintió algo de hambre y decidió darse una vuelta y buscar algo de comer, con la esperanza de que el paseo le sirviera además para que por fin Morfeo acudiera a su encuentro.

    Cuando entró en la despensa le entró cierto desasosiego; había viandas por todos sitios, jamones, chorizos, marisco, legumbres, … pero no había nada que se pudiera considerar vivo.

    Por si sufría más noches de insomnio, al día siguiente se propuso poner solución a este problema y no reparó en gastos al comprarse un gigantesco acuario

    El acuario tenía varios compartimentos escalonados, cada uno menor que el anterior. Tras su instalación, los sirvientes tuvieron que encargarse de su llenado. Y esto no resultó ser una tarea sencilla porque el magnate quería que sus nuevos peces vivieran en agua mineral, por lo que tuvieron que averiguar la capacidad del acuario para saber cuántos litros de agua comprar.

    ENTRADA :
    La entrada comienza con un número no negativo indicando el número de casos de prueba que vendrán a continuación. Por cada caso de prueba se proporcionará, en una única línea, la descripción del acuario con tres números: el número de compartimentos del acuario (>0), la capacidad en litros del más grande (>0), y la diferencia de litros entre dos compartimentos adyacentes (≥0). Ninguno de los tres números será mayor de 10.000.
    ------------------------------------------------
    3
    5 300 10
    4 400 20
    3 500 30
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba de la entrada, el programa escribirá el número de litros de agua mineral que debieron comprarse para llenar el acuario.
    ------------------------------------------------
    1400
    1480
    1410
    ------------------------------------------------
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int casos;
    unsigned int niveles, capacidad, diferencia, agua;

    cin >> casos;

    int i = 0;
    while (i < casos)
    {
        agua = 0;
        cin >> niveles >> capacidad >> diferencia;

        for (int j = 0; j < niveles; j++)
        {
            agua += capacidad;
            capacidad -= diferencia;
        }
        cout << agua << endl;
        i++;
    }

    return 0;
}