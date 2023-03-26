/*  Abdicación de un Rey

    Cuando un rey abdica, su primogénito hereda el trono y debe recibir, en su coronación, un número que lo identificará para la posteridad. La numeración es importante porque, de otro modo, sería difícil diferenciar a reyes con el mismo nombre de una misma dinastía al compartir también apellido.

    El resultado es que ante la abdicación de un rey, toca revisar los libros de historia para averiguar su número. ¿Eres capaz de hacerlo tú?

    ENTRADA :
    El programa recibirá, por la entrada estándar, múltiples casos de prueba. Cada uno consta de una primera línea con un número indicando la cantidad de reyes de una determinada dinastía. A continuación vendrá, en otra línea, los nombres de todos sus reyes separados por espacio.

    Después aparecerán dos líneas más, una con la cantidad de sucesores futuros que hay que numerar (al menos uno), y otra con sus nombres separados por espacio.

    Todos los nombres estarán compuestos de una única palabra de no más de 20 letras del alfabeto inglés, y serán sensibles a mayúsculas. Además, se garantiza que en cada caso de prueba no habrá más de 20 nombres de reyes diferentes.

    El último caso de prueba, que no deberá procesarse, no contendrá ningún rey en la dinastía.
    ------------------------------------------------
    11
    Felipe Carlos Felipe Felipe Felipe Carlos Felipe Carlos Alfonso Alfonso JuanCarlos
    3
    Felipe Leonor Felipe
    12
    Carlos Isabel Carlos Jorge Jorge Jorge Jorge Guillermo Victoria Jorge Jorge Isabel
    3
    Carlos Guillermo Jorge
    0
    ------------------------------------------------

    SALIDA :
    Para cada sucesor de cada caso de prueba se indicará, en una línea independiente, el número que le corresponderá. Aunque normalmente se utilizan números romanos, por simplicidad se indicará el número en la notación arábiga tradicional. Después de cada caso de prueba se escribirá una línea en blanco.
    ------------------------------------------------
    6
    1
    7

    3
    2
    7

    ------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int reyes;
    int sucesores;
    string nombreRey;
    string sucesor;

    while (1)
    {
        cin >> reyes;
        if (reyes == 0)
            break;

        unordered_map<string, int> mapaReyes;

        for (int i = 0; i < reyes; i++)
        {
            cin >> nombreRey;
            if (mapaReyes.count(nombreRey) == 0)
                mapaReyes.insert({nombreRey, 1});
            else
                mapaReyes.at(nombreRey)++;
        }

        cin >> sucesores;
        for (int i = 0; i < sucesores; i++)
        {
            cin >> sucesor;
            if (mapaReyes.count(sucesor) == 0)
                mapaReyes.insert({sucesor, 1});
            else
                mapaReyes.at(sucesor)++;

            cout << mapaReyes.at(sucesor) << endl;
        }
        cout << endl;
    }

    return 0;
}