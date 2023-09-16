
#include <iostream>

using namespace std;

int main()
{
    int T, i, n;

    cin >> T;

    for(i = 0; i < T; i++)
    {
        cin >> n;

        if(n % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}
