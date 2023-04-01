// ¿EN QUÉ VOLÚMEN ?

#include <iostream>
using namespace std;

int main()
{
    int casos, numero;

    cin >> casos;

    for (; casos > 0; casos--)
    {
        cin >> numero;
        if (numero >= 100)
            cout << numero / 100 << endl;
    }

    return 0;
}