#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        vector <int> v1(n);
        vector <int> v2(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

            v1[i] = v2[i] = v[i];
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());



        if(v == v1 || v == v2)
            cout << "YES";
        else
            cout << "NO";

        if(t != 0) cout << endl;
    }

    return 0;
}
