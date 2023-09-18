#include<iostream>

using namespace std;


int main()
{
    int t;
    char ch;
    cin >> t;

    getchar();

    while(t--)
    {
        string s;
        getline(cin, s);

        int c = 0, f = 0, j = 0;

        while(s[j] != '\0')
        {
            if(s[j] == ' ')
            {
                f = 0;
            }
            else if(s[j] != ' ' && f == 0)
            {
                c++;
                f = 1;
            }

            j++;
        }

        cout << "Count = " << c;
        if(t != 0) cout << endl;
    }

    return 0;
}
