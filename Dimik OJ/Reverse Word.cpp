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
        char s[1001];
        cin >> s;

        int l = strlen(s) - 1;

        while(l >= 0)
        {
            cout << s[l];
            l--;
        }

        if(t != 0) cout << endl;
    }

    return 0;
}
