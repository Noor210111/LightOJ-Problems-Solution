#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double n;
        int c = 0;

        cin >> n;

        while(n >= 1)
        {
            c++;
            n /= (double)2;
        }

        cout << c << " days";

        if(t != 0) cout << endl;
    }

    return 0;
}
