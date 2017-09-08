#include<stdio.h>
int main()
{
   int  a,b,j=1,t,i=0,sum;
   scanf("%d",&t);
   while (j<=t)
  {
scanf("%d %d",&a,&b);
      {
     sum=0;
      for (i=a;i<=b;i++)
      if (i%2!=0)
     sum=sum+i;
       printf("Case %d: %d\n",j,sum);
       }
       j++;
   }
}
