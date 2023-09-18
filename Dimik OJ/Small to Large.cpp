#include <iostream>

using namespace std;

int main()
{
    int t, p = 1;
    cin >> t;

    while(t--)
    {
        int a[3], temp;
        for(int i = 0; i < 3; i++)
            cin >> a[i];

        for(int i = 0; i < 2; i++)
        {
            for(int j = i + 1; j < 3; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        cout << "Case " << p << ":";
        for(int i = 0; i < 3; i++)
            cout << " " << a[i];
        p++;
        cout << endl;
    }
}
