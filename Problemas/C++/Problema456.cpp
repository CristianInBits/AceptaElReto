/*  Tarta Sacher

    Para celebrar tu próximo cumpleaños has decidido sacar tu vena culinaria y, en lugar de comprar otro año más la misma tarta, hacerla en casa.

    Como amante del chocolate que eres, has decidido hacer una tarta Sacher. La historia de esa tarta es digna de película, e incluye incluso disputas legales entre los herederos de Franz Sacher y la pastelería vienesa Demel por hacerse con el derecho a comercializar la tarta con el apelativo "Tarta Sacher original".

    Después de mucho buscar, has conseguido encontrar la que parece ser la primera receta, la de verdad, la creada en 1832 y no los burdos intentos por imitarla. Las cantidades de los ingredientes vienen indicados en medidas bastante imaginativas, porque en aquella época los kilos como medida se usaban aún solo en Francia.

    En particular, la cantidad de chocolate que hay que usar viene medida en cuadritos. Confías en que un cuadrito de 1832 siga siendo lo mismo que un cuadrito en las tabletas de chocolate de hoy en día, así es que ahora lo que necesitas es averiguar cuántas tabletas tienes que comprar, sabiendo cuántos entran en cada una.

    ENTRADA : 
    El programa deberá leer, de la entrada estándar, un primer número indicando cuántos casos de prueba vendrán a continuación.

    Cada caso de prueba consiste en tres números separados por espacios, 1 ≤ n, m ≤ 1.000, 1 ≤ r ≤ 10.000. Los dos primeros indican el número de cuadritos que vienen en las tabletas del chocolate que vas a comprar, a lo ancho y a lo alto. El número r indica cuántos cuadritos necesitas según la receta original.
    ------------------------------------------------
    2
    4 6 20
    7 5 50
    ------------------------------------------------

    SALIDA :
    Por cada caso de prueba el programa escribirá la mínima cantidad de tabletas de chocolate que tienes que comprar.
    ------------------------------------------------
    1
    2
    ------------------------------------------------
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, m, r, casos;

    cin >> casos;

    int i = 0;
    while (i < casos)
    {
        cin >> n >> m >> r;

        if ((n * m) >= r)
        {
            cout << 1 << endl;
        }
        else
        {
            if (r % (n * m))
            {
                cout << (r / (n * m) + 1) << endl;
            }
            else
                cout << (r / (n * m)) << endl;
        }

        i++;
    }

    return 0;
}