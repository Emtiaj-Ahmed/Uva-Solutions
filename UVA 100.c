#include<stdio.h>

int main()

{

    int a,b,i,k,count,m,p;

    while(scanf("%d%d",&a,&b)==2)

    {m=0;printf("%d %d",a,b);

    if(a>b)

    {

        p=a;a=b;b=p;

    }

        for(i=a;i<=b;i++)

        {count=1;k=i;

           {while(k>1)

           {

               if(k%2==0)

               {

                   k=k/2;

               }

               else

               k=3*k+1;

               count++;

           }}

           if(count>=m)

           m=count;



            }

            printf(" %d\n",m);

        }

        return 0;

}


