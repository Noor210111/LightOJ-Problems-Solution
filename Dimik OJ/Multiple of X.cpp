#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        if(a > b)
            cout << "Invalid!" << endl;
        else
        {
            long long temp = a;

            while(a <= b)
            {
                cout << a << endl;
                a += temp;
            }
        }

        cout << endl;
    }

    return 0;
}
