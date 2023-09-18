#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n;
        a = n % 10;
        b = n / 10000;
        cout << "Sum = " << a + b << endl;
    }

    return 0;
}
