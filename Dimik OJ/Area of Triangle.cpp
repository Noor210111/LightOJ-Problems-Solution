#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double a, b, c, s;
        cin >> a >> b >> c;

        s = (a + b + c) / 2;
        s = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area = %0.3lf\n", s);
    }

    return 0;
}
