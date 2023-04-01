// Por el hueco de la escalera

#include <iostream>
using namespace std;

int main()
{
    int casos, pisoVivo, escalonesPiso, pisosCompletos, escalonesAdd;
    cin >> casos;

    while (casos--)
    {
        cin >> pisoVivo >> escalonesPiso >> pisosCompletos >> escalonesAdd;
        cout << pisosCompletos * escalonesPiso + escalonesAdd << " "
             << pisoVivo * escalonesPiso + pisosCompletos * escalonesPiso + escalonesAdd << endl;
    }

    return 0;
}