#include <iostream>

using namespace std;

int main()
{
    int t, f;
    cin >> t;
    while(t--)
    {
        f = 1;
        string s;
        cin >> s;

        for(int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {
            if(s[i] != s[j]) f = 0;
        }

        if(f == 1) cout << "Yes! It is palindrome!" << endl;
        else cout << "Sorry! It is not palindrome!" << endl;
    }
    return 0;
}
