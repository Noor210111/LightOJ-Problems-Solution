#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        string s;
        char ch;
        getchar();

        getline(cin, s);

        cin >> ch;

        int c = 0;

        for(int i = 0; s[i] != '\0'; i++)
            if(s[i] == ch)
                c++;

        if(c > 0) cout << "Occurrence of '" << ch << "' in '" << s << "' = " << c << endl;
        else cout << "'" << ch << "' is not present" << endl;

    }

    return 0;
}
