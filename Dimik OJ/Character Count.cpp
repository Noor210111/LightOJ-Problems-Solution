#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        map <char, int> mp;
        map <char, int> visited;

        for(int i = 0; i < s.size(); i++)
            mp[s[i]]++;

        for(int i = 0; i < s.size(); i++)
            if(visited[s[i]] == 0)
            {
                cout << s[i] << " = " << mp[s[i]] << endl;
                visited[s[i]] = 1;
            }

        if(t != 0) cout << endl;
    }
}
