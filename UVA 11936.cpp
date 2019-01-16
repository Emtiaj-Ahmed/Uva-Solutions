#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, a[3];
    cin >>tc;
    while (tc--)
    {
        int b, c;
        for (int i =0; i <3; i++)
        {
            cin >>a[i];
            b= a[0] + a[1];
            c= a[2];

        }

        if (b>c)
        {
            cout <<"Ok" <<endl;
        }
        else
        {
            cout <<"Wrong!" <<endl;
        }


    }
    return 0;
}
