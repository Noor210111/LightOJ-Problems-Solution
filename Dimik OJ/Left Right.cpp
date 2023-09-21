#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;

    cin >> t;
    while(t--)
    {
        cin >> s;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L')
                s[i] = s[i - 1];
            else if(s[i] == 'R')
                s[i] = s[i + 1];
        }

        cout << s << endl;
    }

    return 0;
}
