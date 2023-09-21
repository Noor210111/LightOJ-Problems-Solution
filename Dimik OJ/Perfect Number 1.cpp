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

        map <string, bool> is_perfect;

        is_perfect["6"] = true;
        is_perfect["28"] = true;
        is_perfect["496"] = true;
        is_perfect["8128"] = true;
        is_perfect["33550336"] = true;
        is_perfect["8589869056"] = true;
        is_perfect["137438691328"] = true;
        is_perfect["2305843008139952128"] = true;

        if(is_perfect[s])
            cout << "YES, " << s << " is a perfect number!"<<endl;

        else
            cout << "NO, " << s << " is not a perfect number!"<<endl;
    }

    return 0;
}
