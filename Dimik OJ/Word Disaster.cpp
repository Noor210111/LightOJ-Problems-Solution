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
        getline(cin, s);

        int temp = -1, x;

        for(int i = 0; i <= s.size(); i++)
        {
            if(s[i] == ' ' || s[i] == '\0')
            {
                if(temp != -1)
                    cout << " ";

                x = i - 1;
                while(x > temp)
                {
                    cout << s[x];
                    x--;
                }

                temp = i;
            }
        }

        if(t != 0) cout << endl;
    }

    return 0;
}
