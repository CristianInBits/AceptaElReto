/*  Claras y oscuras

    Después de muchos años ahorrando para la obra de su ruinosa casa, Paca Herse ha podido por fin contratar a una cuadrilla de obreros que están prácticamente haciéndole una casa nueva. Los gastos se han disparado y cualquier cosa es importante para ahorrar unos eurillos.

    Para los suelos, quiere poner unas losetas grandes con dos colores alternos para que formen un patrón clásico similar al de los tableros de ajedrez. Para no desaprovechar material, que luego no se puede devolver, ha estado midiendo todas las estancias de la casa, para averiguar el número de losetas de ancho y de alto que necesita en cada una. Ahora quiere afinar más para saber exactamente cuántas necesita de cada color.

    ENTRADA :
    La entrada comienza con un número indicando la cantidad de casos de prueba que el programa deberá procesar.

    Un caso de prueba consiste en dos números naturales mayores que 0 y menores que 1.000 con el número de losetas que entran en una habitación a lo ancho y a lo alto.
    ------------------------------------------------
    3
    1 3
    4 4
    2 6
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba, el programa escribirá una línea con el número de losetas que hay que comprar de cada tipo. Los colores aún no están decididos, pero para que la casa sea lo más luminosa posible, prefiere que, si hay que elegir, haya más losetas claras que oscuras. En la salida se indicará primero cuántas losetas claras se necesitan, seguido del número de oscuras.
    ------------------------------------------------
    2 1
    8 8
    6 6
    ------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{

    int casos, ancho, alto, area;

    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> ancho;
        cin >> alto;

        area = ancho * alto;

        if (area % 2)
        {
            cout << area / 2 + 1 << " " << area / 2 << endl;
        }
        else
            cout << area / 2 << " " << area / 2 << endl;
    }

    return 0;
}