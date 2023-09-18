#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    getchar();

    while(t--)
    {
        string s;
        getline(cin, s);

        int j = 0, k = 0, l = 0;
        char v[1001], c[1001];

        while(s[j] != '\0')
        {
            if(s[j] == ' ')
            {
                j++;
                continue;
            }

            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                v[k] = s[j];
                k++;
            }

            else
            {
                c[l] = s[j];
                l++;
            }

            j++;
        }

        v[k] = '\0';
        c[l] = '\0';

        cout << v << endl << c;

        if(t != 0) cout << endl;
    }

    return 0;
}
