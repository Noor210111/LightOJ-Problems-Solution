#include<iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, c = 0;
        cin >> n;

        long long m = 5;

        while(m <= n)
        {
            c += n / m;
            m = m * 5;
        }
        cout << c;
        if(t != 0) cout << endl;
    }

    return 0;
}
