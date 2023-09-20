#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0, sum = 0, r;

        cin >> n;

        int m = n;

        while(m != 0)
        {
            r = m % 10;
            sum += r * r * r;
            m /= 10;
        }

        if(n == sum)
            cout << n << " is an armstrong number!";
        else
            cout << n << " is not an armstrong number!";

        if(t != 0) cout << endl;

    }

    return 0;
}
