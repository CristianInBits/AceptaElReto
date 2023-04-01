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