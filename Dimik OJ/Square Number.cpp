#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int r = sqrt(n);
        if(r == sqrt(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
