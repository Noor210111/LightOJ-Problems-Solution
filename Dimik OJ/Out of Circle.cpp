#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        float m, n, r, x, y;

        cin >> m >> n;
        cin >> r;
        cin >> x >> y;

        float r1 = sqrt(pow((m - x), 2) + pow((n - y), 2));

        if(r > r1) cout << "The point is inside the circle";
        else cout << "The point is not inside the circle";

        if(t != 0) cout << endl;
    }

    return 0;
}
