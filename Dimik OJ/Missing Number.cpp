#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector <int> v;

        for(int i = 0; i < n - 1; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }



        sort(v.begin(), v.end());

        for(int i = 0, p = 1; i < n - 1; i++, p++)
            if(v[i] != p)
            {
                cout << v[i] - 1;
                break;
            }

        if(t != 0) cout << endl;
    }

    return 0;
}
