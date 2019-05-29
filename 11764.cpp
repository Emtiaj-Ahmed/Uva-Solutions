#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,H,I,n, w[50];

    scanf("%d",&tc);
    for (int j = 1; j <= tc; j++)
    {
        H = 0, I = 0;
        scanf("%d", &n);
        for (int i=0; i<n; i++)
        {
            scanf("%d", &w[i]);
        }
        for (int i=1; i<n; i++)
        {
            if(w[i] > w[i-1])
            {
                H= H+1;
            }
            if (w[i-1] > w[i])
            {
                I = I+1;
            }
        }
        printf ("Case %d: %d %d\n", j, H, I);


    }
    return 0;
}

