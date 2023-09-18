#include <iostream>
#include <math.h>

using namespace std;

int prime(int n)
{
    int i;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int a, b, c = 0;
        cin >> a >> b;

        while(a <= b)
        {

            if(a == 1 || a == 0)
            {
                a++;
                continue;
            }

            c = c + prime(a);
            a++;
        }
        cout << c;

        if(t != 0) cout << endl;
    }

    return 0;
}
