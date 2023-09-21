#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, a2, j, k, l;
        cin >> a;
        int ara[a];

        for(j = 0; j < a; j++)
            cin >> ara[j];

        cin >> a2;
        int ara2[a2];

        for(k = 0; k < a2; k++)
            cin >> ara2[k];

        int add[a + a2];

        for(j = 0, k = 0, l = 0; j < a && k < a2; l++)
        {
            if(ara[j] < ara2[k])
            {
                add[l] = ara[j];
                j++;
            }
            else
            {
                add[l] = ara2[k];
                k++;
            }
        }

        while(j < a)
        {
            add[l] = ara[j];
            j++;
            l++;
        }

        while(k < a2)
        {
            add[l] = ara2[k];
            k++;
            l++;
        }

        for(l = 0; l < a + a2; l++)
        {
            if(l == 0)
                cout << add[l];
            else
                cout << " " << add[l];
        }
        cout << endl;
    }

    return 0;
}
