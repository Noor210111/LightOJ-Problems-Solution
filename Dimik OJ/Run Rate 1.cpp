#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int op, bats, ball;
        cin >> op >> bats >> ball;

        float rr1, rr2;

        rr1 = (float)(bats * 6) / (300 - ball);
        printf("%0.2lf ", rr1);

        if(op < bats)
        {
            printf("%0.2lf\n", 0.0);
            continue;
        }

        op++;
        rr2 = (float)((op - bats) * 6) / ball;
        printf("%0.2lf\n", rr2);
    }

    return 0;
}
