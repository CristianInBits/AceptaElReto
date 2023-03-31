/*  Toesto era campo

    Aún recuerdo bien cuando, de pequeño, mi abuelo venía a buscarme algunas veces al colegio y pasábamos la tarde juntos. Jugaba perfectamente su papel de abuelo y me malcriaba dándome todos los caprichos que mis padres nunca me concedían.

    Han pasado muchos años desde aquello y ahora soy yo quien, de vez en cuando, va a visitarle a él y le saco a pasear. O cogemos el coche y le llevo a alguna ciudad cercana para hacer algo de turismo.

    En esas tardes que a buen seguro echaré de menos cuando ya se me haya ido, él disfruta contándome todas sus "batallitas" de cuando era joven y yo aprovecho para enterarme de cosas de la familia que no sabía.

    Cuando paseamos por alguna ciudad por la que él anduvo en sus años mozos siempre se escandaliza sobre la cantidad de edificaciones nuevas y suelta su "¡Madre mía! ¡Toesto era campo!". Me gusta tanto oírselo que a veces planeo las rutas pasando por sitios donde sé que lo dirá.

    Eso sí, el otro día me dejó un poco preocupado porque me lo dijo en el centro de la ciudad justo al lado de una iglesia románica del siglo XI… ¿Se le estará yendo la cabeza?


    ENTRADA :
    La entrada estará compuesta por distintos casos de prueba, cada uno en una línea.

    Cada línea tendrá dos números. El primero dice cuántos años tenía el abuelo cuando yo nací y el segundo cuántos años tenía la iglesia (no le llevo a visitar iglesias construidas después de mi nacimiento). Las cifras nunca son negativas ni mayores que 1000.

    La entrada termina con dos ceros que no deben procesarse.
    --------------------------------------------------------------------
    60 1000
    62 62
    60 50
    0 0
    --------------------------------------------------------------------

    SALIDA :
    Por cada caso de prueba se escribirá SENIL si es imposible que hubiera campo en ese sitio cuando el abuelo nació y CUERDO si el abuelo no miente.
    --------------------------------------------------------------------
    SENIL
    CUERDO
    CUERDO
    --------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{

    unsigned int anyiosAbu, anyiosIglesia;

    while (1)
    {
        cin >> anyiosAbu >> anyiosIglesia;
        if (!anyiosAbu && !anyiosIglesia)
            break;

        if (anyiosAbu >= anyiosIglesia)
        {
            cout << "CUERDO" << endl;
        }
        else
            cout << "SENIL" << endl;
    }

    return 0;
}