#include <bits//stdc++.h>
using namespace std;
int GCD (int a, int b)
 {
     int c;
     while (a!=0)
     {
        c=b%a;
        b=a;
        a=c;
     }

     return b;
 }
 int main()
 {
     int n;
     while(scanf("%d",&n) && n!=0)
     {
         long G=0;
         for(int i=1; i<n; i++)
        {
            for (int j=i+1; j<=n; j++)
            {
                G+=GCD(i,j);
            }

        }

           printf("%ld\n",G);
     }
     return 0;
 }
