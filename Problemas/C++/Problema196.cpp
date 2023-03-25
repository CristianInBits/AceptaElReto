/*  Sudokus vacíos

    Un sudoku es un tipo de pasatiempo numérico que se popularizó en Japón en 1986 e internacionalmente en 2005, aunque sus raíces alcanzan hasta el propio Leonhard Euler, en el siglo XVIII. Consiste en una tabla de 9 × 9 celdas, en la que se distinguen 9 "regiones" de 3 × 3.

    En cada una de las celdas se debe escribir un dígito entre 1 y 9. Inicialmente se proporcionan algunas de las celdas ya rellenas, y se deja al jugador la responsabilidad de completar las demás, sabiendo que cada fila, cada columna y cada región de 3 × 3 debe contener todos los dígitos del 1 al 9 una única vez.

        - - - 5 - 9 2 - 7
        6 7 - 3 - - - - 4
        - 4 9 2 - - - 8 5
        - - - - - - - - -
        2 3 - - - 4 1 6 -
        - - - 1 - - - - -
        5 - - - - 8 - 9 1
        8 - 4 9 - 7 - - -

    Los creadores de sudokus se encargan de que, dada la distribución de partida, sólo exista un modo de completar el resto de celdas. Además, Nikoli, la compañía japonesa que bautizó y popularizó el pasatiempo, impuso una restricción extra: para ser considerado un buen sudoku, éste no debe proporcionar más de 32 celdas rellenas, y debe tener simetría rotacional. Esto significa que si la distribución inicial del sudoku se rota 180 grados, las celdas ocupadas son las mismas, aunque no necesariamente con los mismos dígitos. Por ejemplo, tras rotarlo 180 grados, el sudoku anterior queda:

        - - - 7 - 9 4 - 8
        1 9 - 8 - - - - 5
        - - - - - 1 - - -
        - 6 1 4 - - - 3 2
        - - - - - - - - -
        5 8 - - - 2 9 4 -
        4 - - - - 3 - 7 6
        7 - 2 9 - 5 - - -

    Si se superponen las dos figuras, se observa que, aunque con números diferentes, las celdas que están rellenas son las mismas. Los buenos aficionados a resolver sudokus aprovechan esto en su beneficio. Cada vez que completan una celda, se plantean si es posible rellenar la celda simétrica, algo que, aseguran, ocurre con bastante frecuencia.

    ENTRADA :
    La entrada comienza con un primer número indicando el número de casos de prueba que vienen a continuación. Cada caso de prueba consiste en la distribución inicial de un sudoku.

    Cada sudoku se proporciona con 9 líneas. Cada una está compuesta a su vez de 9 caracteres contiguos, cada uno representando el valor de una de las celdas de esa fila. El símbolo - se utiliza para indicar una celda vacía.

    Dos casos de prueba consecutivos se separan por una línea en blanco. También hay una línea en blanco antes del primer sudoku.
    ------------------------------------------------
    2

    ---5-92-7
    67-3----4
    -----2---
    -492---85
    ---------
    23---416-
    ---1-----
    5----8-91
    8-49-7---

    ---5-92-7
    67-3----4
    -----2---
    -492---85
    ---------
    23---416-
    ---------
    5----8-91
    8-49-7---
    ------------------------------------------------
    SALIDA :
    Para cada caso de prueba se escribirá SI si el sudoku es válido, es decir si no supera los 32 dígitos rellenos y tiene simetría rotacional. En otro caso, se escribirá NO.

    Ten en cuenta que no hay que preocuparse de si, con la configuración de partida, el sudoku es o no resoluble, por lo que los números leídos son indiferentes y el programa debe únicamente preocuparse de qué casillas están llenas y cuáles no.
    ------------------------------------------------
    SI
    NO
    ------------------------------------------------
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int casos;
    cin >> casos;
    while (casos--)
    {
        bool solucion = true;
        vector<bool> mivector(40, false);
        char c;
        int digitos = 0;

        for (int i = 0; i < 40; i++)
        {
            cin >> c;
            if (c != '-')
            {
                mivector[i] = true;
                digitos++;
            }
        }

        cin >> c; // Letra central de la matriz

        for (int i = 39; i >= 0; i--)
        {
            cin >> c;
            if (c != '-')
            {
                digitos++;
                if (!mivector[i])
                    solucion = false;
            }
            else if (mivector[i])
                solucion = false;
        }

        if (digitos > 32)
            solucion = false;

        cout << (solucion ? "SI\n" : "NO\n");
    }

    return 0;
}