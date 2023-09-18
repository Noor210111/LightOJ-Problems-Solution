#include<iostream>

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
        int j = 0, c = 0;
        while(s[j] != '\0')
        {
            if(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I'  || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U')
                c++;
            j++;
        }
        cout << "Number of vowels = " << c << endl;
    }

    return 0;
}
