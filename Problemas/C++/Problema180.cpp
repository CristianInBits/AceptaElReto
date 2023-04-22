/* Triángulos
    Es bien sabido que la suma de los ángulos de cualquier triángulo es siempre 180 grados. En función del ángulo mayor, los triángulos se pueden clasificar en tres tipos:

    Acutángulo: el mayor de los tres ángulos es agudo (menor de 90 grados).
    Rectángulo: el mayor de los tres ángulos es recto (exactamente 90 grados).
    Obtusángulo: el mayor de los tres ángulos es obtuso (mayor de 90 grados).

    ¿Eres capaz de, a partir de la longitud de tres segmentos, decir el tipo de triángulo que forman?

    ENTRADA :
    La entrada consistirá en un primer número indicando el número de casos de prueba que vendrán después.

    Cada caso de prueba ocupará una línea, y estará compuesto de tres números enteros no negativos menores que 215 − 1, separados por espacios y no necesariamente ordenados. Cada entero representará la longitud de cada uno de los lados de un triángulo.
-------------------------------------------
    4
    3 4 4
    5 3 4
    3 4 6
    3 4 7
-------------------------------------------

    SALIDA :
    Para cada caso de prueba, el programa indicará el tipo de triángulo, escribiendo ACUTANGULO, RECTANGULO u OBTUSANGULO. Si resulta imposible formar un triángulo con esos segmentos, escribirá IMPOSIBLE.
-------------------------------------------
    ACUTANGULO
    RECTANGULO
    OBTUSANGULO
    IMPOSIBLE
-------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Declaración de variables
    int n;
    int lados[3];

    // Leer número de casos de prueba
    cin >> n;

    // Bucle principal
    while (n--)
    {
        // Leer longitudes de los lados
        cin >> lados[0] >> lados[1] >> lados[2];

        // Ordenar los lados de menor a mayor
        sort(lados, lados + 3);

        // Comprobar si se puede formar un triángulo
        if (lados[0] + lados[1] <= lados[2])
        {
            cout << "IMPOSIBLE" << endl;
        }
        else
        {
            // Calcular el cuadrado de la longitud de cada lado
            int a2 = lados[0] * lados[0];
            int b2 = lados[1] * lados[1];
            int c2 = lados[2] * lados[2];

            // Comprobar tipo de triángulo
            if (a2 + b2 == c2)
            {
                cout << "RECTANGULO" << endl;
            }
            else if (a2 + b2 > c2)
            {
                cout << "ACUTANGULO" << endl;
            }
            else
            {
                cout << "OBTUSANGULO" << endl;
            }
        }
    }

    return 0;
}
