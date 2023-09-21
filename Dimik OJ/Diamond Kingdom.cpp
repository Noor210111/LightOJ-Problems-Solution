#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == i)
                    cout << m;
                else
                    cout << m << " ";
            }

            cout << endl;
        }

        for(int i = n - 1; i > 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                if(j == i - 1)
                    cout << m;
                else
                    cout << m << " ";
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
