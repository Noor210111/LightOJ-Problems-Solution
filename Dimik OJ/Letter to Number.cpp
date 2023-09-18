#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    getchar();

    while(t--)
    {
        string s;
        cin >> s;

        int n, j = 0;

        while(s[j] != '\0')
        {

            n = s[j] - 'A' + 1;

            cout << n;

            j++;
        }

        if(t != 0) cout << endl;
    }

    return 0;
}
