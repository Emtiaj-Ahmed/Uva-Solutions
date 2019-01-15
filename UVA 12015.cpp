#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    char a [10] [100];
    static unsigned r [10], c, max;

    cin >>tc;
    while (tc--)
    {
        cin >> a[0] >> r[0];
        max = r[0];

        for (int i=1; i<10; i++)
        {
            cin >> a[i] >>r[i];
            if(r[i]>max)
            {
                max = r[i];
            }

        }
        cout << "Case #" <<++c <<":" <<endl;
        for (int i=1; i<10; i++)
        {
            if (r[i]== max)
            {
                cout <<a[i] <<endl;
            }
        }

    }


    return 0;

}
