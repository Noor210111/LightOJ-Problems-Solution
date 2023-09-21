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

        for(int i = n; i >= 0; i--)
        {
            if (i > 1)
                cout << 2 << "^" << i << " + ";
            else if(i == 1)
                cout << 2 << " + ";
            else if(i == 0)
                cout << 1;
        }
        if(t != 0) cout << endl;
    }

    return 0;
}
