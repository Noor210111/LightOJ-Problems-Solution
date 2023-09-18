#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int t;
    char ch;
    cin >> t >> ch;

    while(t--)
    {
        char s[100001];
        gets(s);

        char *end = strtok(s, " ");
        int c = 0;

        while(end != NULL)
        {
            end = strtok(NULL, " ");
            c++;
        }

        cout << c;
        if(t != 0) cout << endl;
    }

    return 0;
}
