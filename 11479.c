#include <stdio.h>
 int main()
{

   int n,t;
   scanf("%d\n",&t);
   for(n=1 ;n<=t ;n++)
   {
      long int a,b,c;
      scanf("%ld %ld %ld",&a, &b, &c);

        if((a+b)<=c || (b+c)<=a || (c+a)<=b)
       {
              printf("Case %ld: Invalid\n",n);
       }
          else if(a<=0 || b<=0 || c<=0)
          {
              printf("Case %ld: Invalid\n",n);
          }

        else if(a==b && b==c)
        printf("Case %ld: Equilateral\n",n);
        else if(a==b || b==c || c==a)
        printf("Case %ld: Isosceles\n",n);
        else
         printf("Case %ld: Scalene\n",n);

      }

    return 0;
}
