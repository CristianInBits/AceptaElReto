/*  Tensión descompensada

   La hipertensión arterial es un mal de "nuestro tiempo" que afecta a gran parte de la población, especialmente los mayores. Y eso para mí es malo, muy malo. Como es una enfermedad muy extendida, cuando les cuento a los médicos lo mal que me siento desde que soy hipertenso no me hacen demasiado caso. Me dicen que me tranquilice, que siga el tratamiento y la dieta y que no me preocupe más.

    Pero yo estoy muy alarmado con el asunto, que tan mayor no soy. Para poder controlarme la tensión regularmente, tengo un tensiómetro en cada habitación. Así, me pille donde me pille la siguiente crisis, puedo medir mi presión arterial en cuestión de segundos y ver si tengo que salir corriendo al hospital o no.

    La gente que tengo alrededor dice que estoy exagerando. Incluso los médicos de urgencias ya me conocen y me dejan horas en la sala de espera antes de llamarme. Y cuando me atienden noto cierto desdén en sus palabras supuestamente tranquilizadoras.

    Lo peor de todo es que mi enfermedad va a peor. He leído en "El rincón del hipocondríaco" que es muy malo tener la tensión descompensada, algo que ocurre cuando la "mínima" y la "máxima" están demasiado cerca. Tras leerlo me he tomado la tensión y el susto ha sido mayúsculo, tanto que he salido disparado al hospital. Y la verdad es que me he enfadado bastante al ver cómo se han reído de mí en urgencias cuando les he dicho que la tenía tan descompensada que la mínima estaba por encima de la máxima. Me han dicho algo de que igual he leído los números al revés. 

    ENTRADA :
    La entrada comienza con una línea que contiene el número de casos de prueba que vendrán a continuación.

    Cada caso de prueba es la lectura de los dos valores de presión dadas por el tensiómetro, separadas por una barra ("/") entre dos espacios. Ambas cifras serán mayores que cero y no superarán 250.
    ---------------------------------------------------------------
    3
    120 / 70
    70 / 120
    120 / 120
    ---------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba se escribirá una única línea, indicando si la lectura es correcta (BIEN) o está dada la vuelta (MAL).

    Se considera correcta si el primer valor es la máxima y el segundo la mínima.
    ---------------------------------------------------------------
    BIEN
    MAL
    BIEN
    ---------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int casos, valor1, valor2;
    char barra;

    cin >> casos;

    for (; casos > 0; casos--)
    {
        cin >> valor1 >> barra >> valor2;

        if (valor1 >= valor2)
        {
            cout << "BIEN" << endl;
        }
        else
            cout << "MAL" << endl;
    }

    return 0;
}