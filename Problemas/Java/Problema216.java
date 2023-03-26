/*      Goteras

    Con la llegada de las lluvias, has descubierto una molesta gotera en el salón. Con precisión suiza, las gotas caen una vez por segundo desde el techo hasta un improvisado cubo que te ves obligado a vaciar periódicamente hasta que encuentres una solución.

    Convivir con una gotera es complicado porque tienes que sincronizar tu vida alrededor de los vaciados del cubo…

    ENTRADA :
    La entrada estará compuesta de un primer número indicando cuántos casos de prueba vendrán a continuación.

    Cada caso de prueba será un número mayor que cero con el número de gotas que entran en el cubo.
    ------------------------------------------------
    3
    70
    3600
    3661
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba, el programa escribirá en una línea el tiempo máximo que puedes estar sin cambiar el cubo en el formato HH:MM:SS, donde HH indica el número de horas, MM el número de minutos y SS el número de segundos.

    Ningún cubo es tan grande como para poder estar más de un día completo sin cambiarse.
    ------------------------------------------------
    00:01:10
    01:00:00
    01:01:01
    ------------------------------------------------
*/

import java.util.Scanner;

public
class p216
{

public
    static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);

        int casos, gotas, sec = 0, min = 0, horas = 0;

        casos = s.nextInt();

        for (int i = 0; i < casos; i++)
        {

            gotas = s.nextInt();

            horas = gotas / 3600;
            min = (gotas / 60) - (horas * 60);
            sec = gotas - (min * 60) - (horas * 3600);

            System.out.printf("%02d:%02d:%02d", horas, min, sec);
            System.out.println();
        }
    }
}