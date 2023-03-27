/*  Detectando copiones

    La memoria del viejo profesor de matemáticas ya no es lo que era. Hace años, cuando empezó en eso de ilustrar mentes en blanco, no sólo se sabía los nombres y apellidos de todos sus alumnos sino que además era un lince detectando copias de exámenes. Estaba tan seguro de su habilidad que mientras los alumnos intentaban resolver aquellas derivadas e integrales infernales, él se sentaba en la última fila de la clase a dormir sin preocuparse de que la información fluyera entre los estudiantes.

    Su habilidad se basaba en su memoria fotográfica: cuando corregía un examen, era capaz de recordar a la perfección si había visto otro examen con exactamente las mismas respuestas o no. Y si lo encontraba, acusaba al segundo de copiar.

    Ahora, con tantos años encima, su memoria fotográfica se limita a sólo unos pocos de los últimos exámenes que ha corregido, por lo que el número de copias que detecta se ha reducido drásticamente.

    ENTRADA :
    La entrada contiene distintos casos de prueba, cada uno de ellos formado por dos líneas.

    En la primera línea aparecen dos números, N y K, que indican, respectivamente, el número de exámenes que tiene que corregir el viejo profesor y el número de exámenes que es capaz de recordar (1 ≤ N ≤ 1.000.000, 1 ≤ K ≤ 100.000). Tras eso, viene una línea con N números (entre 1 y 100.000) separados por espacios que representan las respuestas de cada uno de los exámenes. Dos exámenes se consideran copiados si están representados por el mismo número.
    ------------------------------------------------
    5 1
    1 2 1 2 1
    5 2
    1 2 1 2 1
    6 2
    1 2 3 1 2 1
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba se escribirá una línea con dos números separados por un espacio. El primero indicará el número de exámenes copiados mientras que el segundo dará la cantidad de copias detectadas por el profesor, sabiendo que, en el momento de corregir un examen, éste es capaz de recordar únicamente los K exámenes inmediatamente anteriores.
    ------------------------------------------------
    3 0
    3 3
    3 1
    ------------------------------------------------
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int N;
    int K;

    while (1)
    {
        unordered_map<int, int> mapaExamenes;
        unordered_map<int, int> mapaRecordatorio;
        vector<int> examenes;

        if (scanf("%lld %d", &N, &K) == EOF)
            break;

        int examen;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &examen);
            examenes.push_back(examen);
        }

        int copiones = 0, copionesCazados = 0;
        int recordatorio = 0;
        for (int i = 0; i < N; i++)
        {

            examen = examenes[i];

            if (!mapaExamenes.count(examen))
                mapaExamenes.insert({examen, 1});
            else
                copiones++;

            if (mapaRecordatorio.count(examen))
                copionesCazados++;

            if (recordatorio < K)
                recordatorio++;
            else
            {
                mapaRecordatorio.at(examenes[i - K])--;
                if (mapaRecordatorio.at(examenes[i - K]) == 0)
                    mapaRecordatorio.erase(examenes[i - K]);
            }

            if (!mapaRecordatorio.count(examen))
                mapaRecordatorio.insert({examen, 1});
            else
                mapaRecordatorio.at(examen)++;
        }

        cout << copiones << " " << copionesCazados << endl;
    }

    return 0;
}