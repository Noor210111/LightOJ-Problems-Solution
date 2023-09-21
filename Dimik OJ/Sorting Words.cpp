#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        getchar();

        char s[n][10001];

        for(int i = 0; i < n; i++)
            gets(s[i]);

        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                if(strcmp(s[i], s[j]) > 0)
                {
                    char temp[10001];
                    strcpy(temp, s[i]);
                    strcpy(s[i], s[j]);
                    strcpy(s[j], temp);
                }

        for(int i = 0; i < n; i++)
            cout << s[i] << endl;
    }

    return 0;
}
