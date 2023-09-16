#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int c;
        char n[101];
        cin >> n;

        c = strlen(n);

        if(n[c - 1] == '0' || n[c - 1] == '2' || n[c - 1] == '4' || n[c - 1] == '6' || n[c - 1] == '8')
            cout << "even" << endl;
        else if(n[c - 1] == '1' || n[c - 1] == '3' || n[c - 1] == '5' || n[c - 1] == '7' || n[c - 1] == '9')
            cout << "odd" << endl;
    }

    return 0;
}
