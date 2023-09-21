#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char s1[129], s2[129];
        cin >> s1 >> s2;

        int i = 0, c = 0, l1, l2;

        l1 = strlen(s1);
        l2 = strlen(s2);

        while(i <= l1 - l2)
        {
            if (strncmp(s1 + i, s2, l2) == 0)
            {
                c++;
            }

            i++;
        }

        cout << c;

        if(t != 0) cout << endl;
    }

    return 0;
}
