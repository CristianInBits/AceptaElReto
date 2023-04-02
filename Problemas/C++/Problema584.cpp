/*  Duración de bombillas LED

    Hoy día pocos son los que dudan de que las bombillas LED han sido un avance en cuanto a consumo de energía en las casas. Es cierto que son bastante más caras que las bombillas tradicionales pero su bajo consumo y su larga duración compensan la inversión inicial.

    De lo que no estoy tan seguro es de la corriente que se ha instalado en muchos fabricantes de lámparas. Tienen tanta confianza en la longevidad de las bombillas que las lámparas que venden no permiten cambiarlas cuando éstas se funden, lo que obliga a desechar la lámpara completa.

    Este hecho me irrita bastante para lamparitas de mesa, pero me parece inadmisible para lámparas que se cuelgan en pared o techo. Al fin y al cabo su instalación requiere hacer agujeros en la pared que seguirán ahí cuando el tiempo de vida de la lámpara expire.

    Con esto, se entenderá que cuando voy a comprar una lámpara me estudie bien las características de las bombillas. Es curioso saber que éstas tienen dos factores que marcan cuándo dejan de funcionar. Por un lado tienen un número máximo de horas de iluminación y por otro tienen un número máximo de encendidos. Si enciendes la bombilla y no la vuelves a apagar durará muchísimas horas. Pero si la enciendes y apagas continuamente, dejará de funcionar mucho antes.

    ENTRADA :
    La entrada comienza con una línea indicando el número de casos de prueba que vendrán a continuación.

    Cada caso de prueba ocupa una única línea y contiene tres enteros. El primero es el número de horas que aguanta la bombilla encendida (hasta 109). El segundo es el número de encendidos que es capaz de soportar (nunca mayor de 108). Por último, aparece el número de horas que, estimo, mantendré la lámpara encendida en cada uso (como mucho 10).
    --------------------------------------------------------------------
    3
    1000 200 10
    1000 100 1
    1000 100 10
    --------------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba se debe decir la causa de la muerte de la bombilla LED.

    Si ésta termina su vida debido a que se alcanza el número máximo de horas encendida se escribirá HORAS. Si es debido a que ya no admite más encendidos, se escribirá ENCENDIDOS. Por último si es por ambas cosas se escribirá AMBAS.
    --------------------------------------------------------------------
    HORAS
    ENCENDIDOS
    AMBAS
    --------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    long casos, horas, encendidos;
    short horasUso;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        cin >> horas >> encendidos >> horasUso;
        if (encendidos * horasUso == horas)
            cout << "AMBAS" << endl;
        else if (encendidos * horasUso > horas)
            cout << "HORAS" << endl;
        else if (encendidos * horasUso < horas)
            cout << "ENCENDIDOS" << endl;
    }

    return 0;
}