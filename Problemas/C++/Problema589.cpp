/*  Igualando copas

    En las grandes celebraciones es habitual terminar brindando, ya sea por el nuevo año que empieza, por los novios, por el niño recién bautizado o, en resumen, por aquello que haya llevado a esa celebración.

    En la última celebración que hicimos en la familia hubo un poco de lío porque dejamos al pequeño de la casa llenar las copas y cada una quedó con un nivel distinto. Cuando el abuelo vió que no estaban todas con exactamente la misma cantidad de líquido, se enfadó un poco y hasta que no las nivelamos, añadiendo bebida donde se necesitaba, no quiso empezar el discurso de brindis que tenía preparado…

    ENTRADA :
    La entrada estará formada por distintos casos de prueba, cada uno en dos líneas.

    La primera línea de cada caso contiene el número n de copas sobre la mesa. En la siguiente línea aparecen n números con la cantidad de líquido que tiene cada una (un número entre 0 y 1012).

    La entrada termina con un 0 que no debe procesarse.
    -------------------------------------------------------------------------------
    3
    10 8 7
    3
    8 8 8
    0
    -------------------------------------------------------------------------------

    SALIDA :
    Para cada caso de prueba se escribirá una única línea con la cantidad mínima de líquido necesaria para equilibrar todas las copas. Se garantiza que la respuesta no excederá 1018.
    -------------------------------------------------------------------------------
    5
    0
    -------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long  caso, var1, max, res, aux;
    cin >> caso;

    while (caso != 0)
    {
        res = 0;
        cin >> var1;
        max = var1;

        for (int i = 1; i < caso; i++)
        {
            cin >> aux;
            if (max < aux)
            {
                res += (aux * i) - (max * i);
                max = aux;
            }
            else
                res += max - aux;
        }
        cout << res << endl;
        cin >> caso;
    }

    return 0;
}