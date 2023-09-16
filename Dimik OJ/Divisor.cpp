#include <iostream>

using namespace std;

int main()
{
    int t, p = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << "Case " << p << ":";
        p++;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                cout << " " << i;
            }
        }
        cout << endl;
    }

    return 0;
}
