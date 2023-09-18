#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i = i + 2)
        {
            if(i != 0) cout << " ";
            cout << a[i];
        }

        if(t != 0) cout << endl;
    }

    return 0;
}
