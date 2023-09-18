#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        unsigned long long a, b, temp, lcm;
        cin >> a >> b;

        if(b > a)
        {
            temp = a;
            a = b;
            b = temp;
        }

        lcm = a;
        while(lcm % b != 0)
        {
            lcm += a;
        }

        cout << "LCM = " << lcm;

        if(t != 0) cout << endl;
    }

    return 0;
}
