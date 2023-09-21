#include <iostream>

using namespace std;

int fact(int x)
{
    int sum = 1;
    for(int i = 1; i <= x; i++) sum = sum * i;

    return sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        float sum = 0;
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            sum = sum + ((float)i / fact(i));
        }

        printf("%0.4f\n", sum);
    }

    return 0;
}
