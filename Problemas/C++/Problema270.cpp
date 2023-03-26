/*     Me pilló el toro

    La evaluación continua se le ha ido de las manos al profesor. Les pide a los alumnos que no lo dejen todo para el final pero él no predica con el ejemplo. Ahora tiene todos los ejercicios que los alumnos han ido entregando durante todo el año en una pila de folios y le toca revisarlos. Los ejercicios o están bien (y entonces puntúan positivamente) o están mal (y entonces restan).

    Al final del día quiere tener imprimida una lista con los nombres de todos los alumnos ordenados alfabéticamente y su puntuación en la evaluación continua (resultado de sumar todos los ejercicios que tienen bien menos los que tienen mal). Si un alumno tiene un 0 como balance, no debería aparecer en la lista.

    ¿Puedes ayudar al profesor?

    ENTRADA :
    La entrada consistirá en distintos casos de prueba, cada uno de ellos ocupando un número variable de líneas.

    Cada caso de prueba representa los ejercicios de una de las asignaturas del profesor. Cada asignatura comienza con el número de ejercicios que el profesor tiene que corregir (1 ≤ n ≤ 1000). A continuación aparecen 2·n líneas con las descripciones de cada ejercicio: una línea con el nombre del autor (hasta 100 caracteres), y otra línea indicando si está bien (CORRECTO) o mal (INCORRECTO).

    Los casos de prueba terminarán cuando el número de ejercicios sea cero.
    ------------------------------------------------
    2
    Laureano
    INCORRECTO
    Aldonza
    CORRECTO
    3
    Aldonza
    CORRECTO
    Aldonza
    INCORRECTO
    Laureano
    CORRECTO
    1
    Aldonza Lorenzo
    CORRECTO
    0
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba se escribirá la lista de alumnos evaluados por orden alfabético. La evaluación de un alumno consiste en contar el número de ejercicios correctos menos el de ejercicios incorrectos. Un alumno se considera evaluado cuando el resultado anterior es distinto de cero.

    Para escribir la lista se utilizará una línea por alumno evaluado. Cada línea tendrá el nombre (y quizá apellidos) del alumno seguido de una coma (,) un espacio y el resultado de la evaluación. Tras la lista, aparecerá una línea con tres guiones (---).
    ------------------------------------------------
    Aldonza, 1
    Laureano, -1
    ---
    Laureano, 1
    ---
    Aldonza Lorenzo, 1
    ---
    ------------------------------------------------
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    int puntos;

    while (1)
    {
        map<string, int> mapaAlumnos;
        string nombre, calificacion;

        if (scanf("%d", &casos) == EOF || !casos)
            break;

        getchar();
        for (int i = 0; i < casos; i++)
        {
            getline(cin, nombre);
            getline(cin, calificacion);

            if (calificacion == "CORRECTO")
                puntos = 1;
            else
                puntos = -1;

            if (!mapaAlumnos.count(nombre))
                mapaAlumnos.insert({nombre, puntos});
            else
                mapaAlumnos.at(nombre) += puntos;
        }

        for (auto x : mapaAlumnos)
        {
            if (x.second != 0)
                cout << x.first << ", " << x.second << endl;
        }
        cout << "---" << endl;
    }

    return 0;
}