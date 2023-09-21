#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        unsigned long long int n;
        cin >> n;

        if(n % 2 == 0 && n != 2)
        {
            cout << n << " is not a prime" << endl;
            continue;
        }

        int f = 1;
        unsigned long long int j;

        for(j = 3; j <= sqrt(n); j = j + 2)
        {
            if (n % j == 0)
            {
                f = 0;
                break;
            }
        }

        if (f == 0)
            cout << n << " is not a prime" << endl;
        else
            cout << n << " is a prime" << endl;

        //if(t != 0) cout << endl;
    }

    return 0;
}
