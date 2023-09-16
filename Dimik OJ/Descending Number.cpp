#include <iostream>

using namespace std;

int main()
{
    for(int i = 1000; i >= 1; i--)
    {
        cout << i;
        if(i % 10 == 6 || i % 10 == 1)
            cout << endl;
        else
            cout << " ";
    }

    return 0;
}
