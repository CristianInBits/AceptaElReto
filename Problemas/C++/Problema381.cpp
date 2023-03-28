/*  Alineación planetaria

    Cuando los planetas se alinean en el cielo, la asociación Amantes del Día de la Alineación (ADA) organiza la jornada más divertida en el observatorio del Monte Tajinaste. Los investigadores traen a sus familias, comen todos juntos, bailan… Después de la merienda, y tras cantar la canción "Adiós, planetas en línea" todo el mundo recoge y se marcha a casa. Pero siempre surge la pregunta ¿cuándo volverán a tener la excusa para reunirse? Normalmente esa pregunta la responde Calculón, pero ha conectado una baja médica, un permiso de paternidad y unos moscosos que le sobraban y es muy posible que no se le vuelva a ver por el observatorio hasta Navidad. La de dentro de tres años.

    En el sistema hay varios planetas y para cada uno se conoce su periodo exacto de traslación, es decir, cuántos días tarda en dar una vuelta completa alrededor del sol. Sabiendo que hoy todos los planetas estaban alineados, ¿podrías vaticinar cuándo se volverán a alinear en esa misma posición?

    ENTRADA :
    Cada caso de prueba consiste en una línea con el número N de planetas en el sistema, seguido de una línea con N enteros con el periodo de traslación de cada planeta (en días) alrededor del sol. Nada impide que planetas diferentes tengan el mismo periodo de traslación. El periodo de traslación está entre 1 y 70 días, y siempre es un valor entero. Además, todos los sistemas tienen entre 2 y 5 planetas.

    El último caso de prueba es un único 0, que no debe ser procesado.
    ------------------------------------------------
    2
    4 2
    3
    2 3 5
    0
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba se mostrará una línea con el mínimo número de días que tardarán los planetas en volver a alinearse en la misma posición.
    ------------------------------------------------
    4
    30
    ------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int mcd(int a, int b);
int mcm(int a, int b);

int main()
{
    int N, *vector, dias;

    while (1)
    {
        cin >> N;
        if (!N)
        {
            break;
        }

        vector = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin >> vector[i];
        }

        for (int i = 0; i < N; i++)
            dias = mcm(vector[0], vector[1]);
        for (int i = 2; i < N; i++)
            dias = mcm(dias, vector[i]);

        cout << dias << endl;

        delete[] vector;
    }

    return 0;
}
int mcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return mcd(b % a, a);
}

int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}