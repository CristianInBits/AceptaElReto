/*  Reduciendo envases

    Eso no puede ser. Bajo la justificación de la limpieza, la sanidad y la facilidad de comercialización, cualquier cosa que se compra viene preservada dentro de envoltorios inútiles de un solo uso. Bolsas de caramelos con caramelos en bolsas, magdalenas en bolsitas individuales dentro de paquetes de plástico, surimi enrollado en plástico dentro de envoltorios de plástico… como sigamos así ¡cada patata frita va a terminar viniendo en su propio envoltorio!

    Para aportar tu granito de arena a la racionalización de todo esto, has decidido que tus elecciones de los productos a comprar se basarán, a partir de ahora, en elegir aquellos que menos envoltorio lleven. Envoltorio por el que, recuerdas indignado, también pagas aunque vaya directamente al cubo de la basura.

    Báscula de precisión en mano, antes de comprar nada te vas a dedicar a pesar el producto completo y a mirar en la etiqueta el peso neto (útil). Patatas al punto de sal, al jamón o a la vinagreta… ¡qué más da! Si el peso neto son 300 gramos pero el envase son 30 gramos ¡estás pagando plástico a precio de patata frita!

    ENTRADA : 
    La entrada comenzará con un primer número indicando cuántos casos de prueba habrá que procesar.

    Cada caso de prueba son dos números, 1 ≤ N ≤ T ≤ 1.000 con el peso neto del producto que vas a comprar, y el peso total medido con tu báscula de precisión.
    --------------------------------------------------------------------
    2
    300 330
    150 250
    --------------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba, el programa deberá escribir el peso del envase.
    --------------------------------------------------------------------
    30
    100
    --------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int casos, N, T;

    cin >> casos;

    for (; casos > 0; casos--)
    {
        cin >> N >> T;

        cout << T - N << endl;
    }

    return 0;
}