#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int p, q, c;
        cin >> p >> q >> c;

        int pwr = 1;
        for(int i = 1; i <= q; i++)
            pwr = (pwr * p) % c;

        //int r = pwr % c;

        cout << "Result = " << pwr;

        cout << endl;
    }

    return 0;
}
