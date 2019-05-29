#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(1)
    {
        scanf("%d",&a);
        if (a==0)
        break;
        b=(a*(a+1)*((2*a)+1))/6;
        printf("%d\n",b);

    }
}
