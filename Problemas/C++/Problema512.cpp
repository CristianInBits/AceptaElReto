/*  Döner sospechoso

    Tras varias horas de turismo por una ciudad que prefiero no nombrar, decidí hacer una pausa rápida para comerme un Döner (también conocidos, incorrectamente, como Döner Kebab). Entré en un establecimiento y me sorprendió que uno de los que ofrecían era especialmente barato, aunque no ponía de qué carne estaba hecho.

    Cuando le pregunté al encargado me respondió con dificultad. "Carne buena, buena, aquí, yo mezclo — dijo señalándose para darme la idea de que la carne la compraban y procesaban ellos mismos — . Conejo y caballo, 50%. Por cada conejo, un caballo, 50%".

    Le di las gracias y me marché en busca de alguna otra cosa que llevarme al gaznate. Si esa era su forma de calcular porcentajes, prefería no saber nada más.

    ENTRADA :
    La entrada comienza con un número que indica cuántos casos de prueba habrá que procesar.

    Un caso de prueba está compuesto por dos números enteros entre 0 y 100 con el número de kilos de conejo y de caballo respectivamente que se han mezclado para preparar la carne que da vueltas en el asador. Se garantiza que la suma será mayor que cero.
    ---------------------------------------------------------------
    3
    53 47
    3 5
    86 97
    ---------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba, el programa escribirá el porcentaje de conejo que hay en la mezcla. El resultado se escribirá sin decimales, redondeado hacia abajo.
    ---------------------------------------------------------------
    53
    37
    46
    ---------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()

{
    int casos, redondeo;
    float kgConejo, kgCaballo, porcentaje;

    cin >> casos;

    for (; casos > 0; casos--)
    {
        cin >> kgConejo >> kgCaballo;

        porcentaje = (kgConejo * 100.0) / (kgCaballo + kgConejo);
        redondeo = (int)porcentaje;
        cout << redondeo << endl;
    }

    return 0;
}