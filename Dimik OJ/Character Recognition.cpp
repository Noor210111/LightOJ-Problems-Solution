#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char c;

        getchar();

        c = getchar();

        if(c >= 'a' && c <= 'z')
            cout << "Lowercase Character";

        else if(c >= 'A' && c <= 'Z')
            cout << "Uppercase Character";

        else if(c >= '0' && c <= '9')
            cout << "Numerical Digit";

        else
            cout << "Special Characters";

        if(t != 0) cout << endl;
    }

    return 0;
}
