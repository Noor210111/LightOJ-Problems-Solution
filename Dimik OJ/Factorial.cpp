#include <iostream>

using namespace std;

int main()
{
    int t, n;

    cin>>t;
    while(t--)
    {
         long long int fact = 1;
         cin >> n;
         for(int i = 1; i <= n; i++)
         {
            fact *= i;
         }
         cout << fact << endl;
    }

    return 0;
}
