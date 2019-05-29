#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
    int n, k, p, s;
    scanf("%d %d %d", &n, &k, &p);
          s = k+p;
          while (s > n)
          {
              s = s-n;
          }

        printf("Case %d: %d\n", i, s);

    }

    return 0;
}
