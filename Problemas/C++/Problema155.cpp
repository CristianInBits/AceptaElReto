/* Perímetro de un rectángulo

    El perímetro de un polígono es la suma de la longitud de todos sus lados. ¿Eres capaz de calcular el perímetro de un rectángulo?

    ENTRADA :
    La entrada consta de una serie de casos de prueba. Cada uno contiene, en una sola línea, la definición de un rectángulo. Un rectángulo se especifica proporcionando las coordenadas de la esquina superior derecha. Se debe considerar que la esquina inferior izquierda está siempre en el origen de coordenadas, es decir en (0, 0). Se garantiza que la longitud de un lado no superará 108.

    El último caso de prueba, que no debe procesarse, contendrá un valor negativo en alguno de los ejes.
    ------------------------------------------------
    3 2
    5 4
    -9 3
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba se escribirá, en una línea independiente, el perímetro del rectángulo.
    ------------------------------------------------
    10
    18
    ------------------------------------------------
    */
   
#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int x, y;

    // Bucle principal
    while (cin >> x >> y && x >= 0 && y >= 0)
    {
        // Calcular perímetro
        int perimetro = 2 * (x + y);

        // Imprimir resultado
        cout << perimetro << endl;
    }

    return 0;
}
