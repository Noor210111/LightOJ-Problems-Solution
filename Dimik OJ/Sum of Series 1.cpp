#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, k, sum = 1;
        cin >> x >> k;

        for(int i = 1; i <= k; i++)
        {
            sum = sum + pow(x, i);
        }

        cout << "Result = " << sum << endl;
    }

    return 0;
}
