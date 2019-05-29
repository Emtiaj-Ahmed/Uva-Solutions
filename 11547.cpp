#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf ("%d", &t);
    for (int i = 1; i <= t ; i++)
    {

    int n,a,b,c,d,e,f,g,res;
    scanf("%d",&n);
    a = n* 567;
    b = a/9;
    c = b +7492;
    d = c * 235;
    e = d/47;
    f = e-498;
    g = (f/10) % 10;
    res = abs(g);
    printf ("%d\n", res);

    }

    return 0;
}
