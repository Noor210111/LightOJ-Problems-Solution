#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, i , j;
        cin >> n;

        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
                cout << "*";
            cout << endl;
        }
        if(t != 0)
            cout << endl;
    }

    return 0;
}
