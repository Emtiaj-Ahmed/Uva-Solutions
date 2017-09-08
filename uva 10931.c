#include <stdio.h>
int main()
{
    int n,i,arr[10000],j, mod=0;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
        {
            break;
        }
    for(i=0; ;i++)
    {
        arr[i]=n%2;
        if(n==0)
        {
            break;
        }
        n=n/2;
        if(arr[i]==1)
        {
            mod++;
        }
    }
    printf("The parity of ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d", arr[j]);
    }
    printf(" is %d (mod 2).\n", mod);
    mod=0;
    }
    return 0;
}
