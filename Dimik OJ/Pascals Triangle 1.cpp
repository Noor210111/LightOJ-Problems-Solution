#include<iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int rows;
        cin >> rows;
        rows++;

        for (int i = 0; i < rows; i++)
        {
            int val = 1;

            for (int k = 0; k <= i; k++)
            {
                cout << val;
                if(k != i) cout << " ";
                val = val * (i - k) / (k + 1);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
